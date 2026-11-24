#include <iostream>

using namespace std;

int main() {
    const double weightLimitKg = 20.0;
    const double studentDiscount = 0.15;
    const double childDiscount = 0.50;
    const double seniorDiscount = 0.40;

    int routeChoice;
    double baseFare = 0.0;
    double bagWeightKg;
    double extraWeightRate;
    int age;
    char studentAnswer;
    string destination;
    cout << "=== Trips from Addis Ababa ===\n"
         << "1. Addis Ababa to Bahir Dar  - 1,500 Birr\n"
         << "2. Addis Ababa to Gondar     - 1,800 Birr\n"
         << "3. Addis Ababa to Hawassa    - 1,000 Birr\n"
         << "4. Addis Ababa to Dire Dawa  - 1,200 Birr\n"
         << "5. Addis Ababa to Mekelle    - 2,000 Birr\n"
         << "Choose a route (1-5): ";
    if (!(cin >> routeChoice)) {
        cout << "Invalid route choice.\n";
        return 1;
    }

    switch (routeChoice) {
        case 1:
            destination = "Bahir Dar";
            baseFare = 1500;
            break;
        case 2:
            destination = "Gondar";
            baseFare = 1800;
            break;
        case 3:
            destination = "Hawassa";
            baseFare = 1000;
            break;
        case 4:
            destination = "Dire Dawa";
            baseFare = 1200;
            break;
        case 5:
            destination = "Mekelle";
            baseFare = 2000;
            break;
        default:
            cout << "Please choose a route from 1 to 5.\n";
            return 1;
    }

    cout << "Enter your bag weight in kg: ";
    if (!(cin >> bagWeightKg) || bagWeightKg < 0) {
        cerr << "Invalid bag weight.\n";
        return 1;
    }

    cout << "Enter the extra charge per kg in Birr: ";
    if (!(cin >> extraWeightRate) || extraWeightRate < 0) {
        cerr << "Invalid extra weight rate.\n";
        return 1;
    }

    cout << "Are you a student? (y/n): ";
    if (!(cin >> studentAnswer) ||
        (studentAnswer != 'y' && studentAnswer != 'Y' &&
         studentAnswer != 'n' && studentAnswer != 'N')) {
        cerr << "Please enter y or n.\n";
        return 1;
    }

    cout << "Enter your age: ";
    if (!(cin >> age) || age <= 0) {
        cerr << "Invalid age.\n";
        return 1;
    }

    double extraWeight = 0.0;

    if (bagWeightKg > weightLimitKg) {
        extraWeight = bagWeightKg - weightLimitKg;
    }

    double extraCharge = extraWeight * extraWeightRate;
    double discountRate = 0.0;

    if (studentAnswer == 'y' || studentAnswer == 'Y') {
        discountRate += studentDiscount;
    }

    if (age <= 12) {
        discountRate += childDiscount;
    } else if (age >= 60) {
        discountRate += seniorDiscount;
    }

    double discount = baseFare * discountRate;
    double totalFare = baseFare - discount + extraCharge;

    cout << "\nRoute: Addis Ababa to " << destination << '\n'
         << "Base fare: " << baseFare << " Birr\n"
         << "Extra baggage charge: " << extraCharge << " Birr\n"
         << "Discount: " << discount << " Birr\n"
         << "Total fare: " << totalFare << " Birr\n";

   
  return 0;
}
