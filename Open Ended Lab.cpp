#include <iostream>
#include <iomanip>
#include <windows.h>
#include <string>
using namespace std;

// Structure to store ticket information
struct Ticket {
    string name;
    int age;
    int movieID;
    int seatNumber;
    string pin;
};

const string ADMIN_PASSWORD = "admin123";

// Structure to store movie details
struct Movie {
    string name;
    string time;
    int price;
    int availableSeats;
};

// Initial movies
Movie movies[10] = {
    {"Avengers: Endgame", "12:00 PM", 12, 50},
    {"Inception", "03:00 PM", 10, 40},
    {"Interstellar", "06:00 PM", 15, 30},
    {"Joker", "09:00 PM", 8, 25},
    {"Titanic", "11:00 PM", 7, 20}
};

int movieCount = 5; // Initial movie count

Ticket bookedTickets[100]; // Array to store booked tickets
int ticketCount = 0;

// Available seats for each movie
int availableSeats[5] = {50, 40, 30, 25, 20};

// Function to set console text color
void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

// Function to clear screen
void clearScreen() {
    system("cls");
}

// Custom pause function to replace cin.get() and cin.ignore()
void pauseScreen() {
    cout << "\nPress Enter to continue...";
    system("pause >nul");
}

// Update viewMovies function to include dynamically added movies
void viewMovies() {
    clearScreen();
    setColor(11);
    cout << "===============================================\n";
    cout << "                 AVAILABLE MOVIES             \n";
    cout << "===============================================\n";
    setColor(14);
    cout << left << setw(10) << "Movie ID" << setw(25) << "Movie Name" 
         << setw(15) << "Show Time" << setw(20) << "Seats Available" 
         << setw(15) << "Price" << endl;
    cout << "-------------------------------------------------------------------------------\n";
    
    setColor(10);
    for (int i = 0; i < movieCount; i++) {  
        cout << left << setw(10) << i + 1 
             << setw(25) << movies[i].name
             << setw(15) << movies[i].time
             << setw(20) << movies[i].availableSeats
             << setw(15) << "$" + to_string(movies[i].price) << endl;
    }
    
    cout << "-------------------------------------------------------------------------------\n";
    setColor(7);
    pauseScreen();
}




// Function to book a ticket
void bookTicket() {
    clearScreen();
    setColor(11);
    cout << "===============================================\n";
    cout << "                BOOK A TICKET                 \n";
    cout << "===============================================\n";
    setColor(14);
    
    string name, pin;
    int age, movieID = 0, seatNumber = 0;
    
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;

    // Movie selection with dynamic validation
    while (movieID < 1 || movieID > movieCount) {
        viewMovies();
        cout << "\nEnter Movie ID (1-" << movieCount << "): ";
        cin >> movieID;
        if (movieID < 1 || movieID > movieCount) {
            setColor(4);
            cout << "Invalid Movie ID! Try again.\n";
            setColor(14);
            pauseScreen();
        }
    }

    // Seat selection based on available seats
    int maxSeats = movies[movieID - 1].availableSeats;

    if (maxSeats == 0) {
        setColor(4);
        cout << "Sorry, no seats available for this movie.\n";
        setColor(7);
        pauseScreen();
        return;
    }

    while (seatNumber < 1 || seatNumber > maxSeats) {
        cout << "Enter Seat Number (1-" << maxSeats << "): ";
        cin >> seatNumber;
        if (seatNumber < 1 || seatNumber > maxSeats) {
            setColor(4);
            cout << "Invalid Seat Number! Please try again.\n";
            setColor(14);
        }
    }

    cout << "Set a PIN for your booking: ";
    cin >> pin;

    bookedTickets[ticketCount++] = {name, age, movieID, seatNumber, pin};
    movies[movieID - 1].availableSeats--;  // ? Fix: Update available seats dynamically

    setColor(10);
    cout << "\nTicket Booked Successfully!\n";
    setColor(7);
    pauseScreen();
}


// Function to view booked tickets
void viewMyTickets() {
    clearScreen();
    setColor(11);
    cout << "===============================================\n";
    cout << "                 MY TICKETS                   \n";
    cout << "===============================================\n";
    setColor(14);

    string name, pin;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your PIN: ";
    cin >> pin;

    bool found = false;
    
    // Movie details
    string movieNames[] = {"Avengers: Endgame", "Inception", "Interstellar", "Joker", "Titanic"};
    string movieTimes[] = {"12:00 PM", "03:00 PM", "06:00 PM", "09:00 PM", "11:00 PM"};
    int moviePrices[] = {12, 10, 15, 8, 7};

    for (int i = 0; i < ticketCount; i++) {
        if (bookedTickets[i].name == name && bookedTickets[i].pin == pin) {
            found = true;
            int movieIndex = bookedTickets[i].movieID - 1; // Adjust index for arrays

            // Display ticket summary
            setColor(10);
            cout << "\n===============================================\n";
            cout << "                  TICKET SUMMARY              \n";
            cout << "===============================================\n";
            setColor(14);
            cout << "Name       | " << bookedTickets[i].name << endl;
            cout << "Age        | " << bookedTickets[i].age << endl;
            cout << "Movie      | " << movieNames[movieIndex] << endl;
            cout << "Movie ID   | " << bookedTickets[i].movieID << endl;
            cout << "Seat No.   | " << bookedTickets[i].seatNumber << endl;
            cout << "Show Time  | " << movieTimes[movieIndex] << endl;
            cout << "Price      | $" << moviePrices[movieIndex] << endl;
            cout << "===============================================\n";
            setColor(7);
        }
    }

    if (!found) {
        setColor(4);
        cout << "\nNo tickets found for the given name and PIN.\n";
        setColor(7);
    }

    pauseScreen();
}

// Function to cancel a ticket
void cancelTicket() {
    clearScreen();
    setColor(11);
    cout << "===============================================\n";
    cout << "                CANCEL TICKET                  \n";
    cout << "===============================================\n";
    setColor(14);

    string name, pin;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your PIN: ";
    cin >> pin;

    bool found = false;

    for (int i = 0; i < ticketCount; i++) {
        if (bookedTickets[i].name == name && bookedTickets[i].pin == pin) {
            found = true;
            int movieIndex = bookedTickets[i].movieID - 1;

            // Restore the seat
            availableSeats[movieIndex]++;

            // Shift remaining tickets
            for (int j = i; j < ticketCount - 1; j++) {
                bookedTickets[j] = bookedTickets[j + 1];
            }
            ticketCount--;

            setColor(10);
            cout << "\nTicket cancelled successfully!\n";
            setColor(7);
            pauseScreen();
            return;
        }
    }

    if (!found) {
        setColor(4);
        cout << "\nNo ticket found with the given name and PIN.\n";
        setColor(7);
    }

    pauseScreen();
}

// Function to view all booked tickets
void viewAllTickets() {
    clearScreen();
    setColor(11);
    cout << "===============================================\n";
    cout << "              ALL BOOKED TICKETS               \n";
    cout << "===============================================\n";
    setColor(14);

    if (ticketCount == 0) {
        setColor(4);
        cout << "No tickets booked yet!\n";
        setColor(7);
    } else {
        cout << left << setw(15) << "S.No" << setw(15) << "Name" << setw(8) << "Age" << setw(25) << "Movie" << setw(12) << "Seat No." << setw(12) << "Show Time" << setw(8) << "Price" << endl;
        cout << "-----------------------------------------------------------------------------------------------------\n";
        setColor(10);
        for (int i = 0; i < ticketCount; i++) {
            int movieIndex = bookedTickets[i].movieID - 1;
            cout << left << setw(15) << i+1 << setw(15) << bookedTickets[i].name
                 << setw(8) << bookedTickets[i].age
                 << setw(25) << movies[movieIndex].name
                 << setw(12) << bookedTickets[i].seatNumber
                 << setw(12) << movies[movieIndex].time
                 << setw(8) << "$" + to_string(movies[movieIndex].price) << endl;
        }
        setColor(7);
    }
    pauseScreen();
}

// Function to add a new movie
void addMovie() {
    clearScreen();
    setColor(11);
    cout << "===============================================\n";
    cout << "               ADD A NEW MOVIE                 \n";
    cout << "===============================================\n";
    setColor(14);

    if (movieCount >= 10) {
        setColor(4);
        cout << "Movie list is full! Cannot add more movies.\n";
        setColor(7);
    } else {
        cout << "Enter Movie Name: ";
        cin.ignore();
        getline(cin, movies[movieCount].name);
        cout << "Enter Show Time (e.g., 07:30 PM): ";
        getline(cin, movies[movieCount].time);
        cout << "Enter Ticket Price: $";
        cin >> movies[movieCount].price;
        cout << "Enter Available Seats: ";
        cin >> movies[movieCount].availableSeats;

        movieCount++;  // ? Update movie count properly

        setColor(10);
        cout << "Movie added successfully!\n";
        setColor(7);
    }

    pauseScreen();
}


// Function to remove a movie
void removeMovie() {
    clearScreen();
    setColor(11);
    cout << "===============================================\n";
    cout << "              REMOVE A MOVIE                   \n";
    cout << "===============================================\n";
    setColor(14);

    if (movieCount == 0) {
        setColor(4);
        cout << "No movies available to remove.\n";
        setColor(7);
        pauseScreen();
        return;
    }

    viewMovies();
    
    int movieID;
    cout << "\nEnter Movie ID to remove: ";
    cin >> movieID;

    if (movieID < 1 || movieID > movieCount) {
        setColor(4);
        cout << "Invalid Movie ID! Try again.\n";
        setColor(7);
        pauseScreen();
        return;
    }

    // **Step 1: Remove all tickets related to this movie**
    for (int i = 0; i < ticketCount; i++) {
        if (bookedTickets[i].movieID == movieID) {
            // Shift all remaining tickets left to overwrite the deleted one
            for (int j = i; j < ticketCount - 1; j++) {
                bookedTickets[j] = bookedTickets[j + 1];
            }
            ticketCount--;  // Reduce total ticket count
            i--;  // Check the same index again after shifting
        }
    }

    // **Step 2: Shift movies left to overwrite the deleted one**
    for (int i = movieID - 1; i < movieCount - 1; i++) {
        movies[i] = movies[i + 1];  
    }
    movieCount--;

    setColor(10);
    cout << "Movie and all related bookings removed successfully!\n";
    setColor(7);
    pauseScreen();
}



// Admin panel function
void adminPanel() {
    clearScreen();
    setColor(11);
    cout << "===============================================\n";
    cout << "               ADMIN LOGIN                     \n";
    cout << "===============================================\n";
    setColor(14);
    
    string password;
    cout << "Enter Admin Password: ";
    cin >> password;

    if (password != ADMIN_PASSWORD) {
        setColor(4);
        cout << "Incorrect password! Access denied.\n";
        setColor(7);
        pauseScreen();
        return;
    }

    int choice;
    do {
        clearScreen();
        setColor(11);
        cout << "===============================================\n";
        cout << "               ADMIN PANEL                     \n";
        cout << "===============================================\n";
        setColor(14);
        cout << "| 1. View All Booked Tickets                  \n";
        cout << "| 2. Add a New Movie                          \n";
        cout << "| 3. Remove a Movie                           \n";
        cout << "| 4. Exit to Main Menu                        \n";
        cout << "===============================================\n";
        setColor(10);
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                viewAllTickets();
                break;
            case 2:
                addMovie();
                break;
            case 3:
                removeMovie();
                break;
            case 4:
                return;
            default:
                setColor(4);
                cout << "Invalid choice! Try again.\n";
                setColor(7);
                pauseScreen();
        }
    } while (true);
}


// Function to display the main menu
void mainMenu() {
    int choice = 0;
    do {
        clearScreen();
        setColor(11);
        cout << "===============================================\n";
        cout << "         WELCOME TO MOVIE TICKET SYSTEM        \n";
        cout << "===============================================\n";
        setColor(14);
        cout << "| 1. View Movies                               \n";
        cout << "| 2. Book a Ticket                             \n";
        cout << "| 3. View My Tickets                           \n";
        cout << "| 4. Cancel Booking                            \n";
        cout << "| 5. Admin View                                \n";
        cout << "| 6. Exit                                      \n";
        cout << "===============================================\n";
        setColor(10);
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                viewMovies();
                break;
            case 2:
                bookTicket();
                break;
            case 3:
                viewMyTickets();
                break;
            case 4:
            	cancelTicket();
                break;
            case 5:
            	adminPanel();
                break;
            case 6:
                setColor(11);
                cout << "\nThank you for using the system!\n";
                setColor(7);
                return;
            default:
                setColor(4);
                cout << "Invalid choice! Please select a valid option.\n";
                setColor(7);
                pauseScreen();
        }
    } while (true);
}

int main() {
    mainMenu();
    return 0;
}

