#include <iostream>
#include <string>
using namespace std;

int main() {

    // Ticket information
    const double MAX_WEIGHT = 20.0;

    string cities[5] = {
        "Bahir Dar", "Gondar", "Hawassa",
        "Dire Dawa", "Mekelle"
    };

    double prices[5] = {1500, 1800, 1000, 1200, 2000};

    // Discount percentages
    const double STUDENT_RATE = 0.15;
    const double CHILD_RATE = 0.50;
    const double SENIOR_RATE = 0.40;

    int choice, age;
    double weight, chargePerKg;
    char isStudent;

    cout << "===== Addis Ababa Travel Ticket System =====\n";

    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ". Addis Ababa to "
             << cities[i] << " - "
             << prices[i] << " Birr\n";
    }

    cout << "Select your destination (1-5): ";
    cin >> choice;

    if (choice < 1 || choice > 5) {
        cout << "Invalid destination selection.\n";
        return 0;
    }

    // Get passenger information
    cout << "Enter baggage weight (kg): ";
    cin >> weight;

    if (weight < 0) {
        cout << "Invalid baggage weight.\n";
        return 0;
    }

    cout << "Enter additional charge per kg: ";
    cin >> chargePerKg;

    if (chargePerKg < 0) {
        cout << "Invalid charge.\n";
        return 0;
    }

    cout << "Are you a student? (y/n): ";
    cin >> isStudent;

    if (isStudent != 'y' && isStudent != 'Y' &&
        isStudent != 'n' && isStudent != 'N') {
        cout << "Invalid answer.\n";
        return 0;
    }

    cout << "Enter your age: ";
    cin >> age;

    if (age <= 0) {
        cout << "Invalid age.\n";
        return 0;
    }

    // Calculate ticket cost
    double fare = prices[choice - 1];
    double extraCharge = 0;
    double discountRate = 0;

    if (weight > MAX_WEIGHT) {
        extraCharge = (weight - MAX_WEIGHT) * chargePerKg;
    }

    // Apply student discount
    if (isStudent == 'y' || isStudent == 'Y') {
        discountRate = discountRate + STUDENT_RATE;
    }

    // Apply age-based discount
    if (age <= 12) {
        discountRate = discountRate + CHILD_RATE;
    }
    else if (age >= 60) {
        discountRate = discountRate + SENIOR_RATE;
    }

    double discountAmount = fare * discountRate;
    double finalPayment = fare - discountAmount + extraCharge;

    // Display ticket summary
    cout << "\n========== TICKET SUMMARY ==========\n";
    cout << "Destination: Addis Ababa to "
         << cities[choice - 1] << endl;
    cout << "Original Fare: " << fare << " Birr\n";
    cout << "Extra Baggage Fee: " << extraCharge << " Birr\n";
    cout << "Discount: " << discountAmount << " Birr\n";
    cout << "Final Payment: " << finalPayment << " Birr\n";
    cout << "====================================\n";

    return 0;
}
