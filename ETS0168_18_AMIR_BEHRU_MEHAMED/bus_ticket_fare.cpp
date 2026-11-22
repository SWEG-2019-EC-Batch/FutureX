#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    short choice, age;
    float baseFare, bagWeight, ratePerKg;
    float extraCharge = 0;
    float discount = 0;
    float discountAmount, totalFare;
    char student;
    string destination;

    // Select destination
    cout << "===== TRAVEL DESTINATIONS =====" << endl;
    cout << "1. Mekele" << endl;
    cout << "2. Hawassa" << endl;
    cout << "3. Dire Dawa" << endl;
    cout << "4. Arba Minch" << endl;
    cout << "5. Adama" << endl;

    cout << "Choose your destination: ";
    cin >> choice;

    // Determine base fare using switch
    switch (choice)
    {
        case 1:
            destination = "Mekele";
            baseFare = 2500;
            break;

        case 2:
            destination = "Hawassa";
            baseFare = 1200;
            break;

        case 3:
            destination = "Dire Dawa";
            baseFare = 2000;
            break;

        case 4:
            destination = "Arba Minch";
            baseFare = 1500;
            break;

        case 5:
            destination = "Adama";
            baseFare = 700;
            break;

        default:
            cout << "Invalid destination!" << endl;
            return 0;
    }

    // Get traveler's information
    cout << "Enter your age: ";
    cin >> age;

    if ( age < 0) {

        cout << "invalid age information ";
        return 0;
    }

    cout << "Are you a student? (Y/N): ";
    cin >> student;

    // Calculate discount
    if ( student == 'Y' || student == 'y'){
        if (age <= 12)
        {
          discount = 0.65;
        }
        else if (age >= 60)
        {
            discount = 0.40;
        }
        else
        {
            discount = 0.15;
        }
        
     }
    else {
        if (age <= 12)
        {
          discount = 0.50;
        }
        else if (age >= 60)
        {
            discount = 0.25;
        }
        else
        {
            discount = 0;
        }
    }

    discountAmount = baseFare * discount;

    // Get baggage information
    cout << "Enter bag weight (kg): ";
    cin >> bagWeight;

    cout << "Enter rate per extra kg: ";
    cin >> ratePerKg;

    // Calculate extra baggage charge
    if (bagWeight > 20)
    {
        extraCharge = (bagWeight - 20) * ratePerKg;
    }

    // Calculate total fare
    totalFare = baseFare - discountAmount + extraCharge;

    // Display trip information
    cout << fixed << setprecision(2);

    cout << "\n===== TRIP INFORMATION =====" << endl;
    cout << "Starting place   : Addis Ababa" << endl;
    cout << "Destination:      " << destination << endl;
    cout << "Base fare:        " << baseFare << " Birr" << endl;
    cout << "Discount:         " << discount * 100 << "%" << endl;
    cout << "Discount amount:  " << discountAmount << " Birr" << endl;
    cout << "Extra bag charge: " << extraCharge << " Birr" << endl;
    cout << "Total fare:       " << totalFare << " Birr" << endl;

    return 0;
}
