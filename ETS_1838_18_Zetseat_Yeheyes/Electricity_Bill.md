1. Problem Description

Write a C++ program that calculates a customer’s monthly electricity bill based on the number of electricity units (kWh) consumed.

The electricity charges are calculated using the following rates:

* The first 50 units cost 1.50 Birr per unit.
* Every unit above 50 costs 2.00 Birr per unit.
* A fixed service charge of 10 Birr is added to the bill.

The program should calculate and display the energy charge, service charge, and total bill. All monetary values should be displayed with two decimal places.

2. Input

The program accepts the following input:

1. Electricity Units: The total number of electricity units (kWh) consumed during the month. It must be a whole number.

3. Process

The program follows these steps:

1. Start the program.
2. Declare an integer variable energy to store the electricity units consumed.
3. Declare two floating point variables, total and energy_charge, to store the calculated bill amounts.
4. Ask the user to enter the electricity units consumed.
5. Read the electricity units using cin.
6. Use the conditional operator (?:) to calculate the total bill:
    * If the electricity units are greater than 50, calculate the cost of the first 50 units at 1.50 Birr per unit, calculate the remaining units at 2.00 Birr per unit, and add the 10 Birr service charge.
    * Otherwise, multiply the electricity units by 1.50 Birr and add the 10 Birr service charge.
7. Calculate the energy charge by subtracting the service charge (10 Birr) from the total bill.
8. Use fixed and setprecision(2) to format all monetary values to two decimal places.
9. Display the energy charge, service charge, and total bill.
10. End the program.

4. Output

The program displays the following:

1. Energy Charge: The cost of electricity consumed based on the applicable rates.
2. Service Charge: A fixed amount of 10 Birr.
3. Total Bill: The sum of the energy charge and service charge.

All monetary values are displayed with two decimal places.

5. Mathematical Formula

Let:

* U = Electricity units consumed.
* E = Energy charge.
* S = Service charge.
* T = Total bill.

Service Charge

[S = 10]
Total Bill

[T = E + S]

6. Pseudocode

START
    DECLARE energy AS INTEGER
    DECLARE total, energy_charge AS FLOAT
    DECLARE service_charge = 10.0
    DISPLAY "Enter the amount of electricity units used"
    INPUT energy
    IF energy > 50 THEN
        total = (50 * 1.50) + ((energy - 50) * 2.00) + service_charge
    ELSE
        total = (energy * 1.50) + service_charge
    END IF
    energy_charge = total - service_charge
    DISPLAY energy_charge
    DISPLAY service_charge
    DISPLAY total
END

Note: The pseudocode uses IF/ELSE to explain the decision-making logic. The actual C++ program implements this calculation using the conditional operator (?:) instead of an if statement.

7. Example Execution

Example 1: Electricity consumption above 50 units

Input:

Enter the amount of electricity units used: 80

Calculation:

First 50 units:

[50 * 1.50 = 75]

Remaining 30 units:

[(80-50)*  2.00 = 60]

Energy charge:

[75+60=135]

Total bill:

[135+10=145]

Expected Output:

Energy Charge: 135.00 Birr
Service Charge: 10.00 Birr
Total Bill: 145.00 Birr

Example 2: Electricity consumption below 50 units

Input:

Enter the amount of electricity units used: 40

Calculation:

Energy charge:

[40 * 1.50 = 60]

Total bill:

[60+10=70]

Expected Output:

Energy Charge: 60.00 Birr
Service Charge: 10.00 Birr
Total Bill: 70.00 Birr

8. C++ Concepts Used

Concept	Application
Input (cin)	Reads the electricity units from the user.
Output (cout)	Displays the electricity bill details.
Variables (int, float)	Stores electricity units and monetary values.
Constants	Uses a fixed service charge of 10 Birr.
Arithmetic Operators (*, +, -)	Calculates energy charges and the total bill.
Relational Operator (>)	Checks whether electricity consumption exceeds 50 units.
Conditional Operator (?:)	Selects the appropriate electricity billing calculation.
<iomanip>	Provides output formatting tools.
fixed	Displays monetary values in fixed-point notation.
setprecision(2)	Displays two digits after the decimal point.

9. Source Code

The complete C++ implementation is available in:

electricity_bill.cpp


End of Task 2
