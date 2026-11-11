#include <iostream>
#include <iomanip>
using namespace std;

int  main () {

// 1. Declare variables
int hours, minutes;
double distance, totalTime;
double fuelConsumption, fuelPrice;
double averageSpeed, fuelUsed, fuelCost;

// 2. Welcome message
    cout << "========================================" << endl;
    cout << "        TRIP & FUEL COST CALCULATOR      " << endl;
    cout << "========================================" << endl;

    cout << "\nEnter your trip information below." << endl;

    cout << "Trip distance (km): ";
    cin >> distance;

    cout << "Travel time (hours and minutes): ";
    cin >> hours >> minutes;

    cout << "Fuel consumption (liters per 100 km): ";
    cin >> fuelConsumption;

    cout << "Fuel price per liter (Birr): ";
    cin >> fuelPrice;

// 3. convert travel time into hours 
totalTime = hours + (minutes / 60.0);

// 4. Calculate average speed
averageSpeed = distance / totalTime;

// 5. Calculate fuel consumption 
fuelUsed = ( distance * fuelConsumption) / 100.0;

// 6. calculate total feul cost 
fuelCost = fuelUsed * fuelPrice;

// 7. Display trip report 
cout << fixed << setprecision(2);

cout << "\n\n";
    cout << "========================================" << endl;
    cout << "               TRIP REPORT              " << endl;
    cout << "========================================" << endl;

    cout << "             TRIP DETAILS               " << endl;
    cout << "----------------------------------------" << endl;

    cout << left << setw(25) << "Distance traveled:"
         << right << distance << " km" << endl;

    cout << left << setw(25) << "Travel time:"
         << right << hours << " h " << minutes << " min" << endl;

    cout << left << setw(25) << "Total time in hours:"
         << right << totalTime << " hours" << endl;

    cout << "----------------------------------------" << endl;
    cout << "            PERFORMANCE                 " << endl;
    cout << "----------------------------------------" << endl;

    cout << left << setw(25) << "Average speed:"
         << right << averageSpeed << " km/h" << endl;

    cout << left << setw(25) << "Fuel consumption rate:"
         << right << fuelConsumption << " L/100km" << endl;

    cout << left << setw(25) << "Fuel used:"
         << right << fuelUsed << " liters" << endl;

    cout << "----------------------------------------" << endl;
    cout << "             COST DETAILS               " << endl;
    cout << "----------------------------------------" << endl;

    cout << left << setw(25) << "Fuel price per liter:"
         << right << fuelPrice << " Birr" << endl;

    cout << left << setw(25) << "Total fuel cost:"
         << right << fuelCost << " Birr" << endl;

    cout << "========================================" << endl;

    cout << "\nThank you for using the Trip Calculator!" << endl;
    cout << "Have a safe journey!" << endl;

    return 0;
}
