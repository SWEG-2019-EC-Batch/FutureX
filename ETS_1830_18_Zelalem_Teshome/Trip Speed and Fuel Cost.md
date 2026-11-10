TASK 3: Trip Speed and Fuel Cost
1. Problem description
Write a C++ program to calculate the average speed, fuel consumption, and fuel cost of a trip.

The program reads:
- Distance of the trip in kilometers.
- Travel time in hours and minutes.
- Car fuel consumption in liters per 100 kilometers.
- Fuel price per liter in birr.
The program should calculate and display:
1. Average speed (km/h).
2. Fuel used (liters).
3. Fuel cost (birr).
All results should be displayed using two decimal places.
2. Problem analysis
2.1 Input
- Distance in kilometers.
- Travel time in hours.
- Travel time in minutes.
- Fuel consumption (liters per 100 km).
- Fuel price per liter (birr).
2.2 Output
- Average speed (km/h).
- Fuel used (liters).
- Total fuel cost (birr).
3. Process (operations)
- Declare variables to hold the input values and calculated results.
- Print a prompt and read the five inputs.
- Convert the travel time into total hours by dividing minutes by 60 and adding the hours.
- Calculate average speed by dividing distance by total time.
- Calculate fuel used by multiplying distance by fuel consumption and dividing by 100.
- Calculate fuel cost by multiplying fuel used by the price per liter.
- Print all results with two decimal places.
4. Design the program
4.1 Variables: what and how?
Variable	Type	Why this type?
distance	double	Distance may contain decimals.
hours	int	Travel hours are whole numbers.
minutes	int	Travel minutes are whole numbers.
fuelConsumption	double	Fuel consumption may contain decimals.
pricePerLiter	double	Fuel price may contain decimals.
totalTime	double	Total travel time may contain decimals.
averageSpeed	double	Average speed may contain decimals.
fuelUsed	double	Fuel consumption may contain decimals.
fuelCost	double	Fuel cost may contain decimals.


4.2 Constants
const double MINUTES_PER_HOUR = 60.0;
const double DISTANCE_FACTOR = 100.0;

4.3 Reading the input
cout << "Enter distance (km): ";
cin >> distance;

cout << "Enter travel time (hours and minutes): ";
cin >> hours >> minutes;

cout << "Enter fuel consumption (L/100 km): ";
cin >> fuelConsumption;

cout << "Enter fuel price per liter (birr): ";
cin >> pricePerLiter;

4.4 Calculation
First: Calculate total travel time
totalTime = hours + minutes / MINUTES_PER_HOUR;

Second: Calculate average speed
averageSpeed = distance / totalTime;

Third: Calculate fuel used
fuelUsed = distance * fuelConsumption / DISTANCE_FACTOR;

Fourth: Calculate fuel cost
fuelCost = fuelUsed * pricePerLiter;

4.5 Printing the result
cout << fixed << setprecision(2);

cout << "Average speed: " << averageSpeed << " km/h" << endl;
cout << "Fuel used    : " << fuelUsed << " liters" << endl;
cout << "Fuel cost    : " << fuelCost << " birr" << endl;

5. Write the code
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

Sample run
Enter distance (km): 150

Enter travel time (hours and minutes): 2 30

Enter fuel consumption (L/100 km): 8

Enter fuel price per liter (birr): 60

Average speed: 60.00 km/h
Fuel used    : 12.00 liters
Fuel cost    : 720.00 birr

Why these choices?
- The double data type is used for distance, time calculations, fuel consumption, speed, and money because they can contain decimal values.
- The int data type is used for hours and minutes because the question specifies whole numbers.
- The constant MINUTES_PER_HOUR converts minutes into hours.
- The constant DISTANCE_FACTOR represents 100 kilometers in the fuel consumption formula.
- setprecision(2) displays all calculated results with two decimal places.
