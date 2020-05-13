// Hovhannes Margaryan
// CS/IS 135 - 3817 - Online Class
// Lab 6p2



#include "TheaterEngine.h"

using namespace std;

void displayMenu()
{
    cout << endl;
    cout << "1. Buy Ticket" << endl;
    cout << "2. Display seating and sales" << endl;
    cout << "0. Quit" << endl;
    cout << endl;
}

void createSeatingChart(string seats[SIZE_ROWS][SIZE_SEATS], int totalTicketsSold, double totalRevenue)
{
    for (int i = 0; i < SIZE_ROWS; i++)
    {
        if (i == 0)
        {
            cout << "Seats:  ";
        }
        else
        {
            cout << "Row ";
            if (i < 10) { cout << " "; }
            cout  << i << "  ";
            
        }
        for (int j = 0; j < SIZE_SEATS; j++)
        {
            if (i == 0)
            {
                cout << " " << j;
                if (j < 9) {
                    cout << " ";
                }
            }
            else
            {
                cout << " " << seats[i][j];
                if (j < SIZE_SEATS - 1) {
                    cout << " ";
                }
            }
        }
        if (i == 0) {
            cout << "\nRow  " << i << "  ";
            for (int j = 0; j < SIZE_SEATS; j++)
            {
                cout << " " << seats[i][j] ;
                if (j < SIZE_SEATS - 1) {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }

    cout << "TOTAL TICKETS SOLD: " << totalTicketsSold << endl;
    cout << setprecision(2) << fixed;
    cout << "TOTAL REVENUE:  $  " << totalRevenue << endl;
}

double getTicketPrice(int row)
{
    double TicketPrice;

    switch (row)
    {
    case 0:
    case 1:
        TicketPrice = 40.00;
        break;
    case 2:
    case 3:
    case 4:
        TicketPrice = 35.00;
        break;
    case 5:
    case 6:
        TicketPrice = 30.00;
        break;
    case 7:
    case 8:
    case 9:
        TicketPrice = 25.00;
        break;
    case 10:
    case 11:
    case 12:
        TicketPrice = 12.50;
        break;
    case 13:
    case 14:
        TicketPrice = 9.50;
        break;
    default:
        TicketPrice = 0.00;
        break;
    }
	return TicketPrice;
}


void startSellingTickets(int& row, int& colum, int& totalTicketsSold, double& totalRevenue, string seats[SIZE_ROWS][SIZE_SEATS])
{
    char userInput;
    do
    {
        cout << "Seat desired (row, column): ";
        cin >> row >> colum;
        buyTicket(row, colum, totalTicketsSold, totalRevenue, seats);
        cout << "Buy another ticket (y = yes)? ";
        cin >> userInput;

    } while (userInput != 'n');
}

void buyTicket(int row, int colum, int& totalTicketsSold, double& totalRevenue, string seats[SIZE_ROWS][SIZE_SEATS])
{
    if (row > 14 || row < 0 || colum > 19 || colum < 0)
    {
        cout << "Out of range" << endl;
    }
    else if (seats[row][colum] == "#")
    {
        cout << "Seat already taken" << endl;
    }
    else
    {
        double ticketPrice = getTicketPrice(row);
        seats[row][colum] = "#";
        totalTicketsSold += 1;
        totalRevenue += ticketPrice;
        cout << setprecision(2) << fixed;
        cout << "Charge $";
        if (ticketPrice < 10) {
            cout << " ";
        }
        cout  << ticketPrice << endl;
    }
}
