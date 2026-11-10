#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Step 4.1 and 4.2: Constants and variables
    const int FIRST_LIMIT = 50;
    const double FIRST_RATE = 1.50;
    const double EXTRA_RATE = 2.00;
    const double SERVICE_CHARGE = 10.00;

    int units;
    double energyCharge, totalBill;

    // Step 4.3: Read the input
    cout << "Enter electricity units used: ";
    cin >> units;

    // Step 4.4: Calculate
    energyCharge = (units <= FIRST_LIMIT)
                   ? units * FIRST_RATE
                   : (FIRST_LIMIT * FIRST_RATE) +
                     (units - FIRST_LIMIT) * EXTRA_RATE;

    totalBill = energyCharge + SERVICE_CHARGE;

    // Step 4.5: Print the result
    cout << fixed << setprecision(2);

    cout << "Energy charge : " << energyCharge << endl;
    cout << "Service charge: " << SERVICE_CHARGE << endl;
    cout << "Total bill    : " << totalBill << endl;

    return 0;
}
