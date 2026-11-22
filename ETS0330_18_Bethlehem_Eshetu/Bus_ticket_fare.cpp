
#include <iostream>
using namespace std;

int main()
{
    double baseFare, weight, rate;
    double extraCharge, totalFare;
    double discount = 0, discountAmount;
    int age;
    char student;

    // Input trip information
    cout << "Enter base fare: ";
    cin >> baseFare;

    cout << "Enter bag weight in kg: ";
    cin >> weight;

    cout << "Enter extra charge rate per kg: ";
    cin >> rate;

    cout << "Enter traveler's age: ";
    cin >> age;

    cout << "Is the traveler a student? (y/n): ";
    cin >> student;

    // Calculate extra baggage charge
    if (weight <= 20)
    {
        extraCharge = 0;
    }
    else
    {
        extraCharge = (weight - 20) * rate;
    }

    // Calculate discount
    if (age <= 12)
    {
        discount = discount + 0.50;
    }
    else if (age > 60)
    {
        discount = discount + 0.25;
    }

    if (student == 'y' || student == 'Y')
    {
        discount = discount + 0.15;
    }

    // Calculate discount amount
    discountAmount = baseFare * discount;

    // Calculate total fare
    totalFare = (baseFare - discountAmount) + extraCharge;

    // Display trip information
    cout << "\n----- TRIP INFORMATION -----" << endl;
    cout << "Base fare: " << baseFare << " Birr" << endl;
    cout << "Bag weight: " << weight << " kg" << endl;
    cout << "Extra baggage charge: " << extraCharge << " Birr" << endl;
    cout << "Discount: " << discount * 100 << "%" << endl;
    cout << "Discount amount: " << discountAmount << " Birr" << endl;
    cout << "Total fare: " << totalFare << " Birr" << endl;

    return 0;
}
