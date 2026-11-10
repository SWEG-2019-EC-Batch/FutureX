Electricity Bill

1. Input

 Electricity units consumed in a month (kWh), a whole number.

2. Output

Energy charge (birr).
Fixed service charge (10 birr).
Total electricity bill (birr).

3. Formulas Used

When electricity consumption is greater than 50 units:

Energy Charge = (50 × 1.50) + ((Energy Units − 50) × 2.00)

When electricity consumption is 50 units or less:

Energy Charge = Energy Units × 1.50

Total Bill:

Total Bill = Energy Charge + 10

4. Process

1. Start the program.
2. Declare an integer variable for electricity units.
3. Declare floating-point variables for the total bill and energy charge.
4. Ask the user to enter the electricity units consumed.
5. Read and store the electricity units.
6. Check whether the electricity consumption is greater than 50 using the conditional operator.
7. If the condition is true, calculate the cost of the first 50 units at 1.50 birr per unit and the remaining units at 2.00 birr per unit. Add the 10 birr service charge.
8. Otherwise, multiply all the electricity units by 1.50 birr and add the 10 birr service charge.
9. Calculate the energy charge by subtracting the service charge from the total bill.
10. Display the energy charge, service charge, and total bill to two decimal places.
11. Stop the program.

5. Pseudocode

START
    DECLARE energy AS INTEGER
    DECLARE total, energy_charge AS FLOAT
    INPUT energy
    total = (energy > 50) ?
            (50 * 1.50) + (energy - 50) * 2.00 + 10 :
            (energy * 1.50) + 10
    energy_charge = total - 10
    OUTPUT energy_charge
    OUTPUT 10.00
    OUTPUT total
STOP

6. Sample Input and Output

Sample 1

Input:

80

Calculation:

Energy charge = (50 × 1.50) + (80 − 50) × 2.00

Energy charge = 75 + 60 = 135.00 birr

Total bill = 135 + 10 = 145.00 birr

Output:

Energy charge is 135.00
Service charge is 10.00
Your total is 145.00

Sample 2

Input:

30

Calculation:

Energy charge = 30 × 1.50 = 45.00 birr

Total bill = 45 + 10 = 55.00 birr

Output:

Energy charge is 45.00
Service charge is 10.00
Your total is 55.00

