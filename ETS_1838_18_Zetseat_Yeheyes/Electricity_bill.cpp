#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
int energy;
float total, energy_charge;

cout << "Enter the amount of electricity units used: ";
cin >> energy;
  
total = (energy > 50) ? (50 * 1.5) + (energy - 50) * 2.0 + 10.0: (energy * 1.5) + 10.0;
energy_charge = total - 10.0;
cout << fixed << setprecision(2);
  
cout << "\nEnergy Charge: " << energy_charge << " Birr" << endl;
cout << "Service Charge: 10.00 Birr" << endl;
cout << "Total Bill: " << total << " Birr" << endl;

  
  return 0;

}
