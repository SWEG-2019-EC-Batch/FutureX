Trip Calculation

1. Input

* distance: Distance of the trip in km.
* liter: Car’s fuel use in liters per 100 km.
* price: Price per liter in birr.
* hour: Travel time in hours.
* minute: Travel time in minutes.

2. Output

* average_speed: Average speed in km/h.
* fuel_used: Amount of fuel used in liters.
* fuel_cost: Total cost of the fuel in birr.

3. Formulas Used

Time:

time = hour + (minute / 60.0)

Average speed:

average_speed = distance / time

Fuel used:

fuel_used = (liter × distance) / 100

Fuel cost:

fuel_cost = fuel_used × price

4. Process

1. Start.
2. Declare distance, liter, price, average_speed, fuel_cost, and time as floating-point variables.
3. Declare hour and minute as integer variables.
4. Ask the user to enter the distance in km.
5. Read and store the distance.
6. Ask the user to enter the liter per 100 km.
7. Read and store the liter.
8. Ask the user to enter the price per liter.
9. Read and store the price.
10. Ask the user to enter the travel time in hours and minutes separated by space.
11. Read and store the hour and minute.
12. Convert the travel time into hours.
13. Calculate average_speed by dividing the distance by the time.
14. Calculate fuel_used by multiplying the liter by the distance and dividing by 100.
15. Calculate fuel_cost by multiplying the fuel_used by the price.
16. Display average_speed, fuel_used, and fuel_cost to two decimal places.
17. Stop.

5. Pseudocode

START
    DECLARE distance, liter, price AS FLOAT
    DECLARE average_speed, fuel_cost, time AS FLOAT
    DECLARE hour, minute AS INTEGER
    OUTPUT "Enter your distance in km:"
    INPUT distance
    OUTPUT "Enter your liter per 100km:"
    INPUT liter
    OUTPUT "Enter your price per liter:"
    INPUT price
    OUTPUT "Enter your time hour and minute separated by space:"
    INPUT hour, minute
    time = hour + (minute / 60.0)
    average_speed = distance / time
    fuel_used = (liter * distance) / 100
    fuel_cost = fuel_used * price
    OUTPUT average_speed
    OUTPUT fuel_used
    OUTPUT fuel_cost
STOP

6. Sample Input and Output

Sample 1

Input:

Enter your distance in km: 150
Enter your liter per 100km: 8
Enter your price per liter: 60
Enter your time hour and minute separated by space: 2 30

Calculation:

Time = 2 + (30 / 60.0)

Time = 2.5 hours

Average speed = 150 / 2.5

Average speed = 60.00 km/h

Fuel used = (8 × 150) / 100

Fuel used = 12.00 liters

Fuel cost = 12 × 60

Fuel cost = 720.00 birr

Output:

60.00
12.00
720.00

Sample 2

Input:

Enter your distance in km: 200
Enter your liter per 100km: 10
Enter your price per liter: 55
Enter your time hour and minute separated by space: 4 0

Calculation:

Time = 4 + (0 / 60.0)

Time = 4 hours

Average speed = 200 / 4

Average speed = 50.00 km/h

Fuel used = (10 × 200) / 100

Fuel used = 20.00 liters

Fuel cost = 20 × 55

Fuel cost = 1100.00 birr

Output:

50.00
20.00
1100.00
