TASK 2: Electricity Bill
1. Problem description
Write a C++ program to calculate a customer's monthly electricity bill based on the number of electricity units consumed.

The electricity charges are:
- The first 50 units cost 1.50 birr per unit.
- Every unit above 50 costs 2.00 birr.
- A fixed service charge of 10 birr is added.
The program should display the energy charge, service charge, and total bill using two decimal places.

The conditional operator (?:) must be used instead of if.
2. Problem analysis
2.1 Input
- Electricity units consumed (kWh).
2.2 Output
- Energy charge
- Service charge
- Total electricity bill
3. Process (operations)
- Declare variables to hold the electricity units and calculated results.
- Define the fixed values (first-unit limit, first-unit rate, extra-unit rate, and service charge) as constants.
- Print a prompt and read the electricity units.
- Calculate the energy charge:
  - If the units are 50 or less, multiply the units by 1.50.
  - If the units are above 50, calculate the first 50 units at 1.50 and the remaining units at 2.00.
- Calculate the total bill by adding the service charge.
- Print the results with two decimal places.
4. Design the program
4.1 Variables: what and how?
Variable	Type	Why this type?
units	int	Electricity units are whole numbers.
energyCharge	double	The electricity charge may contain decimals.
serviceCharge	double	Stores the fixed service charge.
totalBill	double	Stores the final bill amount.


4.2 Constants
const int FIRST_LIMIT = 50;
const double FIRST_RATE = 1.50;
const double EXTRA_RATE = 2.00;
const double SERVICE_CHARGE = 10.00;

4.3 Reading the input
cout << "Enter electricity units used: ";
cin >> units;

4.4 Calculation
energyCharge = (units <= FIRST_LIMIT)
               ? units * FIRST_RATE
               : (FIRST_LIMIT * FIRST_RATE) +
                 (units - FIRST_LIMIT) * EXTRA_RATE;

totalBill = energyCharge + SERVICE_CHARGE;

4.5 Printing the result
cout << fixed << setprecision(2);

cout << "Energy charge : " << energyCharge << endl;
cout << "Service charge: " << SERVICE_CHARGE << endl;
cout << "Total bill    : " << totalBill << endl;

5. Write the code
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

Sample run 1 (80 units)
Enter electricity units used: 80

Energy charge : 135.00
Service charge: 10.00
Total bill    : 145.00

Sample run 2 (30 units)
Enter electricity units used: 30

Energy charge : 45.00
Service charge: 10.00
Total bill    : 55.00

Why these choices?
- The int data type is used because electricity units are whole numbers.
- The double data type is used for money calculations.
- Constants make it easier to change electricity rates.
- The conditional operator checks whether the units are above 50 without using if.
- setprecision(2) displays money values with two decimal places.
