Addis Ababa Trip Fare Calculator

About the Project

Our project focuses on developing a simple travel fare calculation system using C++. The program helps passengers determine their ticket costs when traveling from Addis Ababa to selected cities. It considers different passenger categories and baggage weight when calculating the amount to be paid.

Available Travel Options

The system provides five destination choices: Bahir Dar, Gondar, Hawassa, Dire Dawa, and Mekelle. Each route has its own base ticket price, which is stored in the program and displayed to the passenger during execution.

How Fare Calculation Is Handled

The ticket price is not the only factor considered by the program. It also checks the passenger’s baggage and eligibility for discounts.

Passengers are allowed to carry 20 kg of baggage without an additional payment. When the weight goes beyond this limit, the passenger is charged for every extra kilogram based on the rate they enter.

The program also provides fare reductions for different passenger categories. Students receive a 15% discount, children who are 12 years old or younger receive 50%, and passengers aged 60 or above receive 40%.

When more than one discount applies, the percentages are combined and deducted from the original ticket price. However, the additional baggage cost is calculated separately and is added after the discount.

Running the Program

At the beginning, the user is presented with a list of destinations and their corresponding fares. After choosing a route, the program collects the necessary passenger information, including baggage weight, additional baggage rate, student status, and age.

Using these details, it determines the applicable discount and any extra baggage payment before calculating the final fare.

Handling Incorrect Inputs

To make the program more reliable, certain input conditions are checked. The passenger must select an available route, provide non-negative baggage and charging values, enter a valid student response, and provide a positive age. If an invalid entry is detected, the program displays an error message instead of continuing with the calculation.

Final Result

Once all information has been processed, the passenger receives a fare summary showing the chosen destination, basic ticket cost, extra baggage payment, discount amount, and final travel expense.

Concepts Applied

During the development of this project, we applied fundamental C++ programming concepts such as arrays, loops, variables, constants, conditional statements, arithmetic expressions, and input/output operations. These concepts helped us organize the program and perform the required calculations.
