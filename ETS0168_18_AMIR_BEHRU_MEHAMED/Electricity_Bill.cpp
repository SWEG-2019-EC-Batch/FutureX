#include <iostream>
#include <iomanip>
using namespace std;

int main() {

  // Declare constants
  const int UNIT_LIMIT = 50;
  const double FIRST_RATE = 1.50;
  const double EXTRA_RATE = 2.00;
  const double SERVICE_CHARGE = 10.00;

// Declare variables
int units;
double firstCharge, extraCharge;
double energyCharge, totalBill;

 //  Welcome message
    cout << "========================================" << endl;
    cout << "       ELECTRICITY BILLING SYSTEM       " << endl;
    cout << "========================================" << endl;

    cout << "\nWelcome! Please enter your monthly electricity usage." << endl;
    cout << "Electricity consumption (kWh): ";
    cin >> units;

// Calculate electricity charge using conditional operator
firstCharge = (units < UNIT_LIMIT ? units : UNIT_LIMIT) * FIRST_RATE;
 extraCharge = ( units > UNIT_LIMIT) ? (  units - UNIT_LIMIT)  * EXTRA_RATE) : 0.0;

   energyCharge = firstCharge + extraCharge; 

//Calculate tatal bill 
totalBill = energyCharge + SERVICE_CHARGE;

  // Display results
cout << fixed << setprecision(2);
cout << "\n\n";
cout << "========================================" << endl;
cout << "             MONTHLY BILL               " << endl;
cout << "========================================" << endl;

  cout << left << setw(27) << "First 50 Units (  1.50 Birr): "  
       << right << setw(10) << firstCharge << "Birr" << endl;
  
  cout << left << setw(27) << "First 50 Units (  2.00 Birr): "  
       << right << setw(10) << extraCharge << "Birr" << endl;

    
  cout << "----------------------------------------" << endl;
  
  
  cout << left << setw(27) << "Total energy charge: "  
       << right << setw(10) << energyCharge << "Birr" << endl;
  
  cout << left << setw(27) << "servive charge: "  
       << right << setw(10) << SERVICE_CHARGE << "Birr" << endl;
  
  cout << "========================================" << endl;
  
   cout << left << setw(27) << "TOTAL AMOUNT TO PAY:"
         << right << setw(10) << totalBill << " Birr" << endl;

    cout << "========================================" << endl;

    cout << "\nThank you for using our electricity service!" << endl;
    cout << "Please keep your bill for future reference." << endl;


return 0;
}
