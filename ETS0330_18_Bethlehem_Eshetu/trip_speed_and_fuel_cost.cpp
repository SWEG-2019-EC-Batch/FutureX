// Task 3: Trip speed and fuel cost
//
// (a) Inputs and outputs
//     Inputs : distance (km), hours, minutes, fuel use (liters per 100 km),
//              price per liter (birr)
//     Outputs: average speed (km/h), fuel used (liters), fuel cost (birr),
//              each with two decimals
//
// (b) Process
//     1. Read the distance, hours, minutes, fuel use and price per liter.
//     2. Change the time to hours: totalHours = hours + minutes / 60
//        (cast minutes to double so the division keeps the decimals).
//     3. Average speed = distance / totalHours.
//     4. Fuel used = distance * fuel use per 100 km / 100.
//     5. Fuel cost = fuel used * price per liter.
//     6. Print the speed, fuel used and fuel cost.
//
// (c) Program

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // constants
    const int MINUTES_PER_HOUR = 60;
    const double KM_PER_BLOCK = 100.0;

    double distance, fuelPer100, pricePerLiter;
    int hours, minutes;

    // input
    cout << "Enter distance (km): ";
    cin >> distance;
    cout << "Enter travel time - hours: ";
    cin >> hours;
    cout << "Enter travel time - minutes: ";
    cin >> minutes;
    cout << "Enter fuel use (liters per 100 km): ";
    cin >> fuelPer100;
    cout << "Enter price per liter (birr): ";
    cin >> pricePerLiter;

    // process
    // casting minutes to double so 30 / 60 gives 0.5 and not 0
    double totalHours = hours + static_cast<double>(minutes) / MINUTES_PER_HOUR;

    double averageSpeed = distance / totalHours;
    double fuelUsed = distance * fuelPer100 / KM_PER_BLOCK;
    double fuelCost = fuelUsed * pricePerLiter;

    // output
    cout << fixed << setprecision(2);
    cout << "Average speed: " << averageSpeed << " km/h" << endl;
    cout << "Fuel used:     " << fuelUsed << " liters" << endl;
    cout << "Fuel cost:     " << fuelCost << " birr" << endl;

    return 0;
}
