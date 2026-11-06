Student Course Total

1. Problem Description

Write a C++ program that calculates a student’s total course result based on three assessment components: assignment, midterm examination, and final examination.

The assignment contributes 20%, the midterm examination contributes 30%, and the final examination contributes 50% to the total course result.

The program should calculate the weighted total and determine whether the student has passed or failed. A student passes if the total result is 50 or above; otherwise, the student fails.

2. Input

The program accepts the following three inputs from the user:

1. Assignment Result: The student’s assignment mark (out of 100).
2. Midterm Result: The student’s midterm examination mark (out of 100).
3. Final Examination Result: The student’s final examination mark (out of 100).

3. Process

The program follows these steps:

1. Start the program.
2. Declare three floating point variables: assignment, mid_term, and final_term to store the assessment results.
3. Ask the user to enter the assignment result.
4. Multiply the assignment result by 0.2 to calculate its weighted contribution.
5. Ask the user to enter the midterm examination result.
6. Multiply the midterm result by 0.3 to calculate its weighted contribution.
7. Ask the user to enter the final examination result.
8. Multiply the final examination result by 0.5 to calculate its weighted contribution.
9. Add the three weighted contributions to calculate the total course result.
10. Use fixed and setprecision(1) to display the total result with one decimal place.
11. Use the conditional operator (?:) to check whether the total result is greater than or equal to 50.
12. If the condition is true, display “PASSED”; otherwise, display “FAILED”.
13. Display the total course result and the student’s pass/fail status.
14. End the program.

4. Output

The program displays:

1. The student’s total course result, calculated from the weighted assessment marks.
2. The student’s academic status:
    * PASSED: If the total result is greater than or equal to 50.
    * FAILED: If the total result is less than 50.

The total result is displayed with one digit after the decimal point.

5. Mathematical Formula

The total course result is calculated using the following formula:

[
Total = (Assignment \times 0.2) + (Midterm \times 0.3) + (Final \times 0.5)
]

The pass/fail condition is:

[

PASSED if Total >= 50
FAILED if Total < 50
]

6. Example Execution

Example Input:

Assessment	Mark
Assignment	80
Midterm Examination	70
Final Examination	90

Calculation:

[
Total = (80 \times 0.2) + (70 \times 0.3) + (90 \times 0.5)
]

[
Total = 16 + 21 + 45
]

[
Total = 82
]

Expected Output:

Enter your assignment result: 80
Enter your mid term result: 70
Enter your final exam result: 90
Your total result is: 82.0 and you have PASSED

7. C++ Concepts Used

The program uses the following Chapter 2 concepts:

Concept	Application
Input (cin)	Receives the three assessment marks from the user.
Output (cout)	Displays instructions and the final result.
Variables (float)	Stores assessment marks and the total result.
Arithmetic Operators (*, +)	Calculates weighted marks and the total result.
Compound Assignment (*=)	Multiplies each assessment mark by its respective weight.
Relational Operator (>=)	Compares the total result with 50.
Conditional Operator (?:)	Determines whether the student passed or failed.
<iomanip>	Provides formatting manipulators.
fixed	Displays the result in fixed point notation.
setprecision(1)	Displays one digit after the decimal point.

8. Source Code

The complete C++ implementation is available in:

Student_course_total.cpp

⸻

End of Exercise