
/*
========================================================
             TRAVEL FARE MANAGEMENT SYSTEM
========================================================

QUESTION 1: BASIC TRAVEL FARE AND BAGGAGE CHARGE

Question:
Design and write a program that accepts the base fare
of a trip. A bag weighing 20 kg or less is free. If the
bag weight exceeds 20 kg, the traveler should pay an
extra charge. The rate per extra kg is entered by the
user.

How I did it:
- I declared variables for the base fare, bag weight,
  extra rate, extra charge, and total fare.
- I used cin to get the required information from
  the user.
- I used an if-else statement to check the bag weight.
- If the weight is 20 kg or less, the extra charge
  is set to zero.
- If the weight is above 20 kg, I calculate the extra
  charge using:

  Extra Charge = (Weight - 20) * Rate

- Finally, I added the extra charge to the base fare
  to get the total fare.

  Total Fare = Base Fare + Extra Charge

QUESTION 2: ADDING TRAVELER DISCOUNTS

Question:
Modify the first program to provide discounts based
on the traveler's age and student status:

- Children (age <= 12): 50% discount.
- Elders (age > 60): 25% discount.
- Students: 15% discount.

A traveler who qualifies for both an age-based discount
and a student discount should receive both discounts.

How I did it:
- I added variables for the traveler's age and student
  status.
- I used an if-else-if statement to check the age.
- I used another separate if statement to check whether
  the traveler is a student.
- I used separate conditions so that discounts can be
  combined when the traveler qualifies for more than one.
- I initialized the discount variable to zero and added
  the applicable discounts to it.

Discount combinations:
- Child only = 50%
- Elder only = 25%
- Student only = 15%
- Child + Student = 65%
- Elder + Student = 40%
- Normal adult who is not a student = 0%

I calculated the discount amount using:

  Discount Amount = Base Fare * Discount Percentage

Then I subtracted the discount from the base fare and
added the extra baggage charge.

  Total Fare = (Base Fare - Discount Amount)
               + Extra Charge

QUESTION 3: ADDING MULTIPLE TRAVEL ROUTES

Question:
Modify the program to support multiple travel routes.
The program should first display a route menu and allow
the user to choose a route. It should have at least five
routes, each with a starting location, destination,
and base fare.

How I did it:
- I created a menu containing five different travel
  routes.
- I used cin to get the user's route selection.
- I used a switch statement to check the selected route.
- Each case assigns the starting location, destination,
  and base fare for that route.
- I used break after each case to prevent execution
  from continuing into the next case.
- I added a default case to handle invalid selections.
- After selecting a route, the program continues with
  the same baggage charge and discount calculations
  from Questions 1 and 2.
- Finally, it displays the complete trip information
  and the total fare.

Available Routes:
1. Addis Ababa to Hawassa
2. Addis Ababa to Adama
3. Addis Ababa to Bahir Dar
4. Addis Ababa to Dire Dawa
5. Addis Ababa to Mekelle

Each route has its own sample base fare.

FINAL PROGRAM SUMMARY

The final program combines all three questions into
one travel fare management system.

It performs the following tasks:

1. Displays the available travel routes.
2. Allows the user to select a route.
3. Assigns the corresponding base fare.
4. Accepts the traveler's baggage weight.
5. Calculates extra baggage charges if necessary.
6. Accepts the traveler's age and student status.
7. Calculates the applicable discounts.
8. Combines discounts when the traveler qualifies
   for more than one.
9. Calculates the final amount to be paid.
10. Displays all trip information.

C++ CONCEPTS USED:
- Variables and data types
- cin and cout
- If, else-if and else statements
- Switch and case statements
- Arithmetic operators
- Logical operators
- String variables
- Break and default
- Output formatting using fixed and setprecision

                    END OF README

*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    // Variable declaration
    int choice, age;
    string from, to;

    double baseFare, weight, rate;
    double extraCharge, totalFare;
    double discount = 0;
    double discountAmount;

    char student;

    // Step 1: Display route menu
    cout << "======================================" << endl;
    cout << "       TRAVEL FARE MANAGEMENT SYSTEM   " << endl;
    cout << "======================================" << endl;

    cout << "\nAvailable Travel Routes:" << endl;
    cout << "1. Addis Ababa to Hawassa" << endl;
    cout << "2. Addis Ababa to Adama" << endl;
    cout << "3. Addis Ababa to Bahir Dar" << endl;
    cout << "4. Addis Ababa to Dire Dawa" << endl;
    cout << "5. Addis Ababa to Mekelle" << endl;

    cout << "\nChoose your route (1-5): ";
    cin >> choice;

    // Step 2: Select route and base fare
    switch (choice)
    {
        case 1:
            from = "Addis Ababa";
            to = "Hawassa";
            baseFare = 800;
            break;

        case 2:
            from = "Addis Ababa";
            to = "Adama";
            baseFare = 400;
            break;

        case 3:
            from = "Addis Ababa";
            to = "Bahir Dar";
            baseFare = 1200;
            break;

        case 4:
            from = "Addis Ababa";
            to = "Dire Dawa";
            baseFare = 1000;
            break;

        case 5:
            from = "Addis Ababa";
            to = "Mekelle";
            baseFare = 1500;
            break;

        default:
            cout << "\nInvalid route selection!" << endl;
            return 0;
    }

    // Step 3: Accept traveler's information
    cout << "\n========== TRAVELER INFORMATION ==========" << endl;

    cout << "Enter bag weight in kg: ";
    cin >> weight;

    cout << "Enter extra charge rate per kg: ";
    cin >> rate;

    cout << "Enter traveler's age: ";
    cin >> age;

    cout << "Is the traveler a student? (y/n): ";
    cin >> student;

    // Step 4: Calculate extra baggage charge
    if (weight <= 20)
    {
        extraCharge = 0;
    }
    else
    {
        extraCharge = (weight - 20) * rate;
    }

    // Step 5: Calculate age-based discount
    if (age <= 12)
    {
        discount = discount + 0.50;
    }
    else if (age > 60)
    {
        discount = discount + 0.25;
    }

    // Step 6: Calculate student discount
    if (student == 'y' || student == 'Y')
    {
        discount = discount + 0.15;
    }

    // Step 7: Calculate discount amount
    discountAmount = baseFare * discount;

    // Step 8: Calculate total fare
    totalFare = (baseFare - discountAmount) + extraCharge;

    // Step 9: Display final trip information
    cout << fixed << setprecision(2);

    cout << "\n======================================" << endl;
    cout << "          FINAL TRIP INFORMATION      " << endl;
    cout << "======================================" << endl;

    cout << "Starting Location: " << from << endl;
    cout << "Destination: " << to << endl;
    cout << "Base Fare: " << baseFare << " Birr" << endl;
    cout << "Bag Weight: " << weight << " kg" << endl;
    cout << "Extra Baggage Charge: " << extraCharge << " Birr" << endl;
    cout << "Discount Percentage: " << discount * 100 << "%" << endl;
    cout << "Discount Amount: " << discountAmount << " Birr" << endl;

    cout << "--------------------------------------" << endl;
    cout << "TOTAL FARE: " << totalFare << " Birr" << endl;
    cout << "======================================" << endl;

    return 0;
}
