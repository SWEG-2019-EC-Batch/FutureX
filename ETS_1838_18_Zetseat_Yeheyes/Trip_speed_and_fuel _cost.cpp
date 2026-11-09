#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
float distance, liter, price, average_speed, fuel_cost;
float time, hour, minute;

cout << "Enter your distance (km): ";
cin >> distance;
cout << "Enter fuel consumption (liters per 100 km): ";
cin >> liter;
cout << "Enter price per liter (Birr): ";
cin >> price;
cout << "Enter travel time (hours and minutes separated by space): ";
  
cin >> hour >> minute;
time = hour + (minute / 60);
  
average_speed = distance / time;
float fuel_used = (liter * distance) / 100;
fuel_cost = fuel_used * price;
cout << fixed << setprecision(2);
  
cout << "\nAverage Speed: " << average_speed << " km/h" << endl;
cout << "Fuel Used: " << fuel_used << " liters" << endl;
cout << "Fuel Cost: " << fuel_cost << " Birr" << endl;
return 0;

  
}
