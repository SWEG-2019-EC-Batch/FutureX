// Name: Bethlehem Eshetu
// ID: ETS0330/18
// Task 3: Trip speed and fuel cost

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double distance, fuelUse, fuelPrice;
    double totalTime, averageSpeed, fuelUsed, fuelCost;
    int hours, minutes;

    cout << "Enter trip distance in km: ";
    cin >> distance;

    cout << "Enter travel time in hours: ";
    cin >> hours;

    cout << "Enter additional minutes: ";
    cin >> minutes;

    cout << "Enter fuel use per 100 km: ";
    cin >> fuelUse;

    cout << "Enter fuel price per liter: ";
    cin >> fuelPrice;

    totalTime = hours + (minutes / 60.0);
    averageSpeed = distance / totalTime;
    fuelUsed = (distance * fuelUse) / 100.0;
    fuelCost = fuelUsed * fuelPrice;

    cout << fixed << setprecision(2);
    cout << "Average Speed: " << averageSpeed << " km/h" << endl;
    cout << "Fuel Used: " << fuelUsed << " liters" << endl;
    cout << "Fuel Cost: " << fuelCost << " birr" << endl;

    return 0;
}
