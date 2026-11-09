Trip Speed and Fuel Cost Calculator

1. Problem Description

Write a C++ program that calculates the average speed of a trip, the amount of fuel used, and the total fuel cost.

The program reads the trip distance in kilometers, travel time in hours and minutes, fuel consumption in liters per 100 kilometers, 
and the price of one liter of fuel in Birr.

It then calculates and displays the average speed, fuel used, and total fuel cost. All results are displayed with two decimal places.

2. Input

The program accepts the following inputs:

1. Distance: The total trip distance in kilometers.
2. Hours: The travel time in hours (whole number).
3. Minutes: The additional travel time in minutes (whole number).
4. Fuel Consumption: The amount of fuel consumed per 100 kilometers (liters).
5. Fuel Price: The price of one liter of fuel in Birr.

3. Process

1. Declare variables to store the distance, travel time, fuel consumption, fuel price, average speed, fuel used, and fuel cost.
2. Read the trip distance from the user.
3. Read the fuel consumption rate.
4. Read the price per liter of fuel.
5. Read the travel time in hours and minutes.
6. Convert the travel time into hours using the formula:
    Time = Hours + (Minutes / 60.0)
7. Calculate the average speed:
    Average Speed = Distance / Time
8. Calculate the amount of fuel used:
    Fuel Used = (Fuel Consumption × Distance) / 100
9. Calculate the total fuel cost:
    Fuel Cost = Fuel Used × Fuel Price
10. Display the average speed, fuel used, and fuel cost with two decimal places.

4. Output

The program displays:

1. Average Speed: The average speed of the trip in kilometers per hour (km/h).
2. Fuel Used: The total amount of fuel consumed in liters.
3. Fuel Cost: The total cost of the fuel in Birr.

All output values are displayed with two decimal places.

5. Formulas Used

1. Conversion of travel time into hours

Time = Hours + (Minutes / 60.0)

2. Average Speed

Average Speed = Distance / Time

3. Fuel Used

Fuel Used = (Fuel Consumption × Distance) / 100

4. Fuel Cost

Fuel Cost = Fuel Used × Fuel Price

6. Pseudocode

START
DECLARE distance, liter, price AS REAL
DECLARE hour, minute AS INTEGER
DECLARE time, average_speed, fuel_used, fuel_cost AS REAL
INPUT distance
INPUT liter
INPUT price
INPUT hour, minute
time = hour + (minute / 60.0)
average_speed = distance / time
fuel_used = (liter * distance) / 100
fuel_cost = fuel_used * price
DISPLAY average_speed with 2 decimal places
DISPLAY fuel_used with 2 decimal places
DISPLAY fuel_cost with 2 decimal places
END

7. Sample Input and Output

Input

* Distance: 150 km
* Travel Time: 2 hours and 30 minutes
* Fuel Consumption: 8 liters per 100 km
* Fuel Price: 60 Birr per liter

Calculations

Step 1: Convert travel time into hours

Time = 2 + (30 / 60)

Time = 2.5 hours

Step 2: Calculate average speed

Average Speed = 150 / 2.5

Average Speed = 60 km/h

Step 3: Calculate fuel used

Fuel Used = (8 × 150) / 100

Fuel Used = 12 liters

Step 4: Calculate fuel cost

Fuel Cost = 12 × 60

Fuel Cost = 720 Birr

Output

Average Speed: 60.00 km/h
Fuel Used: 12.00 liters
Fuel Cost: 720.00 Birr

8. C++ Concepts Used

Concept	Purpose
#include <iostream>	Used for input and output operations.
#include <iomanip>	Used to format decimal output.
Variables	Used to store input values and calculated results.
int	Used to store hours and minutes as whole numbers.
float	Used to store decimal values and calculations.
Arithmetic Operators	Used for addition, multiplication, and division.
cin	Used to receive input from the user.
cout	Used to display the results.
fixed	Keeps the number of decimal places fixed.
setprecision(2)	Displays results with two decimal places.

9. Source Code

The complete C++ program is saved in:

trip_speed_and_fuel_cost.cpp
