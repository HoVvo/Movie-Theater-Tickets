// Hovhannes Margaryan
// CS/IS 135 - 3817 - Online Class
// Lab 6p2


#ifndef TheaterEngine_h
#define TheaterEngine_h

#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include <stdlib.h>

using std::string;

const int SIZE_ROWS = 15;
const int SIZE_SEATS = 20;


void displayMenu();
void createSeatingChart(string[SIZE_ROWS][SIZE_SEATS], int, double);
double getTicketPrice(int);
void startSellingTickets(int&, int&, int&, double&, string[SIZE_ROWS][SIZE_SEATS]);
void buyTicket(int, int, int&, double&, string[SIZE_ROWS][SIZE_SEATS]);
#endif


