#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Step 4.1 and 4.2: Constants and variables
    const double MINUTES_PER_HOUR = 60.0;
    const double DISTANCE_FACTOR = 100.0;

    double distance, fuelConsumption, pricePerLiter;
    double totalTime, averageSpeed, fuelUsed, fuelCost;

    int hours, minutes;

    // Step 4.3: Read the input
    cout << "Enter distance (km): ";
    cin >> distance;

    cout << "Enter travel time (hours and minutes): ";
    cin >> hours >> minutes;

    cout << "Enter fuel consumption (L/100 km): ";
    cin >> fuelConsumption;

    cout << "Enter fuel price per liter (birr): ";
    cin >> pricePerLiter;

    // Step 4.4: Calculate
    totalTime = hours + minutes / MINUTES_PER_HOUR;

    averageSpeed = distance / totalTime;

    fuelUsed = distance * fuelConsumption / DISTANCE_FACTOR;

    fuelCost = fuelUsed * pricePerLiter;

    // Step 4.5: Print the result
    cout << fixed << setprecision(2);

    cout << "Average speed: " << averageSpeed << " km/h" << endl;
    cout << "Fuel used    : " << fuelUsed << " liters" << endl;
    cout << "Fuel cost    : " << fuelCost << " birr" << endl;

    return 0;
}
