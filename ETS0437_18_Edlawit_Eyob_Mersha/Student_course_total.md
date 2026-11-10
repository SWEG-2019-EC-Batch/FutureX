 Student Course Total

1. Input

* assignment: Student’s assignment mark out of 100.
* midterm: Student’s midterm mark out of 100.
* final: Student’s final exam mark out of 100.

2. Output

* total: The student’s course total.
* Pass or Fail: The student’s result based on the course total.

3. Formulas Used

Total:

total = (assignment × 0.2) + (midterm × 0.3) + (final × 0.5)

Pass or Fail:

* If total ≥ 50: Pass
* If total < 50: Fail

4. Process

1. Start.
2. Declare assignment, midterm, final, total, pass, and fail as floating-point variables.
3. Ask the user to enter the assignment mark.
4. Read and store the assignment mark.
5. Ask the user to enter the midterm mark.
6. Read and store the midterm mark.
7. Ask the user to enter the final mark.
8. Read and store the final mark.
9. Calculate total by multiplying the assignment mark by 0.2, the midterm mark by 0.3, and the final mark by 0.5, then adding the results.
10. Check whether total is greater than or equal to 50 using the conditional operator.
11. If true, display “pass”; otherwise, display “fail”.
12. Display total to one decimal place.
13. Stop.

5. Pseudocode

START
    DECLARE assignment, midterm, final, total AS FLOAT
    OUTPUT "Enter the assignment mark"
    INPUT assignment
    OUTPUT "Enter the midterm mark"
    INPUT midterm
    OUTPUT "Enter the final mark"
    INPUT final
    total = (assignment * 0.2) + (midterm * 0.3) + (final * 0.5)
    OUTPUT total
    OUTPUT (total >= 50) ? "pass" : "fail"
STOP

6. Sample Input and Output

Sample 1: Pass

Input:

Enter the assignment mark: 90
Enter the midterm mark: 75
Enter the final mark: 80

Calculation:

total = (90 × 0.2) + (75 × 0.3) + (80 × 0.5)

total = 18 + 22.5 + 40

total = 80.5

Output:

Total = 80.5
pass

Sample 2: Fail

Input:

Enter the assignment mark: 35
Enter the midterm mark: 40
Enter the final mark: 30

Calculation:

total = (35 × 0.2) + (40 × 0.3) + (30 × 0.5)

total = 7 + 12 + 15

total = 34.0

Output:

Total = 34.0
fail
