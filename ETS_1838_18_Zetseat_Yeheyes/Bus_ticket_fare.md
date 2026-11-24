# Addis Ababa Trip Fare Calculator

A simple C++ console program that calculates a passenger's fare for a trip from Addis Ababa to one of five destinations. 
It adds a baggage fee for weight over the 20 kg limit and applies eligible student, child, and senior discounts.

## Routes and example base fares

The program displays these routes in a menu:

| Choice | Route | Example base fare |
| --- | --- | ---: |
| 1 | Addis Ababa to Bahir Dar | 1,500 Birr |
| 2 | Addis Ababa to Gondar | 1,800 Birr |
| 3 | Addis Ababa to Hawassa | 1,000 Birr |
| 4 | Addis Ababa to Dire Dawa | 1,200 Birr |
| 5 | Addis Ababa to Mekelle | 2,000 Birr |

These fares are examples. Update the menu text and corresponding `baseFare` values in the `switch` statement to use current prices.

## Fare rules

- The first 20 kg of baggage has no extra charge.
- Each kilogram over 20 kg is charged at the rate entered by the user.
- Students receive a 15% discount on the base fare.
- Passengers age 12 or younger receive a 50% discount on the base fare.
- Passengers age 60 or older receive a 40% discount on the base fare.
- Eligible discounts are added together and calculated from the base fare. The baggage charge is not discounted.



## Using the program

1. Choose a route from the displayed menu (1–5).
2. Enter baggage weight in kilograms.
3. Enter the extra baggage charge per kilogram in Birr.
4. Enter `y` or `n` to indicate student status.
5. Enter your age.

The program prints the selected route, base fare, baggage charge, discount, and total fare. 
Invalid menu choices and invalid or negative numeric inputs are rejected.
