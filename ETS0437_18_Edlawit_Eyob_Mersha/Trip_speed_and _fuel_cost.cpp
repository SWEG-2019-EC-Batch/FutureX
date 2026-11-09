#include <iostream>
#include <iomanip>

using namespace std;

int main() {
float distance, liter, price, average_speed, fuel_cost, time;
int hour, minute;

cout << "Enter your distance in km: ";
cin >> distance;
cout << "Enter your liter per 100km: ";
cin >> liter;
cout << "Enter your price per liter: ";
cin >> price;
cout << "Enter your time hour and minute separated by space: ";
cin >> hour >> minute;
  
time = hour + (minute / 60.0);
average_speed = distance / time;
float fuel_used = (liter * distance) / 100;
fuel_cost = fuel_used * price;
cout << fixed << setprecision(2);
  
cout << average_speed << endl;
cout << fuel_used << endl;
cout << fuel_cost << endl;
return 0;

  
}
