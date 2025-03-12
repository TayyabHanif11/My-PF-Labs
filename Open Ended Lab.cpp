#include <iostream>
#include <string>
#include <iomanip>
#include <windows.h>

using namespace std;
void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
struct Movie {
    string title;
    string showtime;
    int availableSeats;
};
struct Ticket {
    string userName;
    string movieTitle;
    int seatNumber;
    string showtime;
    string pin;
};
const int MAX_SEATS = 10;
const int NUM_MOVIES = 5;
class TicketManager {
private:
    Movie movies[NUM_MOVIES] = {
        {"Avengers: Endgame", "6:00 PM", MAX_SEATS},
        {"Inception", "8:30 PM", MAX_SEATS},
        {"Interstellar", "9:45 PM", MAX_SEATS},
        {"The Dark Knight", "7:15 PM", MAX_SEATS},
        {"Titanic", "10:00 PM", MAX_SEATS}
    };

    bool seats[NUM_MOVIES][MAX_SEATS] = {{false}};
    Ticket tickets[MAX_SEATS * NUM_MOVIES];
    int ticketCount = 0;

public:
    void displayMovies();
    void displaySeats(int movieIndex);
    void bookTicket();
    void cancelTicket();
    void viewMyTickets();
    void adminView();
};

// Display movies
void TicketManager::displayMovies() {
    setColor(11);
    cout << "\n===== Available Movies =====\n";
    setColor(7);
    for (int i = 0; i < NUM_MOVIES; i++) {
        cout << i + 1 << ". " << movies[i].title << " - Showtime: " << movies[i].showtime
             << " - Available Seats: " << movies[i].availableSeats << endl;
    }
}

// Display available seats
void TicketManager::displaySeats(int movieIndex) {
    setColor(14);
    cout << "\nSeats for " << movies[movieIndex].title << " (O = Available, X = Booked):\n";
    setColor(7);
    for (int i = 0; i < MAX_SEATS; i++) {
        cout << (seats[movieIndex][i] ? "[X] " : "[O] ");
        if ((i + 1) % 5 == 0) cout << endl;
    }
}
void TicketManager::bookTicket() {
    int choice, seatNumber;
    string userName, pin;

    displayMovies();
    cout << "\nEnter the movie number to book: ";
    cin >> choice;

    if (choice < 1 || choice > NUM_MOVIES) {
        setColor(12);
        cout << "Invalid selection! Please enter a valid number.\n";
        setColor(7);
        return;
    }

    int index = choice - 1;
    if (movies[index].availableSeats == 0) {
        setColor(12);
        cout << "Sorry, no seats available!\n";
        setColor(7);
        return;
    }

    displaySeats(index);
    
    cout << "Enter your name: ";
    cin >> userName;

    cout << "Enter seat number (1-10): ";
    cin >> seatNumber;

    if (seatNumber < 1 || seatNumber > MAX_SEATS || seats[index][seatNumber - 1]) {
        setColor(12);
        cout << "Invalid or already booked seat! Choose again.\n";
        setColor(7);
        return;
    }
    cout << "Set a 4-digit PIN for ticket cancellation: ";
    cin >> pin;

    tickets[ticketCount++] = {userName, movies[index].title, seatNumber, movies[index].showtime, pin};
    seats[index][seatNumber - 1] = true;
    movies[index].availableSeats--;

    setColor(10);
    cout << "\n? Ticket booked successfully!\n";
    setColor(7);
    system("pause");
}
void TicketManager::cancelTicket() {
    if (ticketCount == 0) {
        setColor(12);
        cout << "No tickets booked yet!\n";
        setColor(7);
        return;
    }
    string userName, pin;
    int seatNumber;
    cout << "Enter your name: ";
    cin >> userName;
    cout << "Enter seat number to cancel: ";
    cin >> seatNumber;
    for (int i = 0; i < ticketCount; i++) {
        if (tickets[i].userName == userName && tickets[i].seatNumber == seatNumber) {
            cout << "Enter your 4-digit PIN: ";
            cin >> pin;
            if (tickets[i].pin == pin) {
                for (int j = 0; j < NUM_MOVIES; j++) {
                    if (tickets[i].movieTitle == movies[j].title) {
                        seats[j][seatNumber - 1] = false;
                        movies[j].availableSeats++;
                    }
                }
                for (int k = i; k < ticketCount - 1; k++) {
                    tickets[k] = tickets[k + 1];
                }
                ticketCount--;
                setColor(10);
                cout << "? Ticket canceled successfully!\n";
                setColor(7);
                system("pause");
                return;
            }
        }
    }
    setColor(12);
    cout << "? Ticket not found or incorrect PIN!\n";
    setColor(7);
}
void TicketManager::viewMyTickets() {
    setColor(13);
    cout << "\n===== View My Tickets =====\n";
    setColor(7);

    if (ticketCount == 0) {
        cout << "No tickets booked yet!\n";
        return;
    }

    string userName;
    cout << "Enter your name: ";
    cin >> userName;

    bool found = false;
    for (int i = 0; i < ticketCount; i++) {
        if (tickets[i].userName == userName) {
            found = true;
            cout << "Movie: " << tickets[i].movieTitle << " | Seat No: " << tickets[i].seatNumber 
                 << " | Showtime: " << tickets[i].showtime << endl;
        }
    }

    if (!found) {
        setColor(12);
        cout << "No tickets found under this name!\n";
        setColor(7);
    }
    system("pause");
}
void TicketManager::adminView() {
    setColor(13);
    cout << "\n===== Admin View: All Booked Tickets =====\n";
    setColor(7);

    if (ticketCount == 0) {
        cout << "No tickets booked yet!\n";
        return;
    }

    for (int i = 0; i < ticketCount; i++) {
        cout << "Name: " << tickets[i].userName << " | Movie: " << tickets[i].movieTitle 
             << " | Seat No: " << tickets[i].seatNumber << " | Showtime: " << tickets[i].showtime << endl;
    }
    system("pause");
}
int main() {
    TicketManager system;
    int choice;
    do {
        setColor(11);
        cout << "\n===== Movie Ticket System =====\n";
        setColor(7);
        cout << "1. View Movies\n2. Book Ticket\n3. Cancel Ticket\n4. View My Tickets\n5. Admin View\n6. Exit\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: system.displayMovies(); break;
            case 2: system.bookTicket(); break;
            case 3: system.cancelTicket(); break;
            case 4: system.viewMyTickets(); break;
            case 5: system.adminView(); break;
            case 6: return 0;
            default:
                setColor(12);
                cout << "Invalid choice! Try again.\n";
                setColor(7);
        }
    } while (true);
}

