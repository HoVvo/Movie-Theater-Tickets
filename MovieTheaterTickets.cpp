// Hovhannes Margaryan
// CS/IS 135 - 3817 - Online Class
// Lab 6p2


#include "TheaterEngine.h"

using namespace std;

int main()
{
    int row, colum;
    int totalTicketsSold = 0;
    double totalRevenue = 0.00;
    int selection;
    string seats[SIZE_ROWS][SIZE_SEATS];

    // Initializing all of the seats to available
    for (int i = 0; i < SIZE_ROWS; i++)
    {
        for (int j = 0; j < SIZE_SEATS; j++)
        {
            seats[i][j] = "*";
        }
    }

    do
    {
        displayMenu();
        cout << "Selection: ";
        cin >> selection;

        switch (selection)
        {
        case 0 :
            break;
        case 1:
            startSellingTickets(row, colum, totalTicketsSold, totalRevenue, seats);
            break;
        case 2:
            createSeatingChart(seats, totalTicketsSold, totalRevenue);
            break;
        default:
            cout << "Invalid selection" << endl;
            break;
        }

        
    } while (selection != 0);
    return 0;
}