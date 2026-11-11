// Task 2: Electricity bill
//
// (a) Inputs and outputs
//     Input  : units used in the month (kWh, whole number)
//     Outputs: energy charge, service charge, total bill (two decimals)
//
// (b) Process
//     1. Read the number of units used.
//     2. Use the conditional operator to find the units that cost 1.50:
//        if units > 50 it is 50, otherwise it is all the units.
//     3. Use the conditional operator to find the units above 50:
//        if units > 50 it is units - 50, otherwise it is 0.
//     4. Energy charge = (first units * 1.50) + (extra units * 2.00).
//     5. Total bill = energy charge + service charge (10 birr).
//     6. Print the energy charge, service charge and total bill.
//
// (c) Program

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // constants
    const int FIRST_BLOCK = 50;
    const double FIRST_RATE = 1.50;
    const double EXTRA_RATE = 2.00;
    const double SERVICE_CHARGE = 10.00;

    int units;

    // input
    cout << "Enter units used (kWh): ";
    cin >> units;

    // process
    int firstUnits = (units > FIRST_BLOCK) ? FIRST_BLOCK : units;
    int extraUnits = (units > FIRST_BLOCK) ? units - FIRST_BLOCK : 0;

    double energyCharge = firstUnits * FIRST_RATE + extraUnits * EXTRA_RATE;
    double totalBill = energyCharge + SERVICE_CHARGE;

    // output
    cout << fixed << setprecision(2);
    cout << "Energy charge:  " << energyCharge << " birr" << endl;
    cout << "Service charge: " << SERVICE_CHARGE << " birr" << endl;
    cout << "Total bill:     " << totalBill << " birr" << endl;

    return 0;
}
