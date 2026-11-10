TASK 1: Student Course Total 
1. Problem description
Write a C++ program to calculate a student's course total using assignment, midterm, and final examination marks.

The course total is calculated as follows:
- Assignment = 20%
- Midterm = 30%
- Final = 50%
The pass mark is 50. The program should display the student's total mark (one decimal place) and whether the student has Pass or Fail.

The conditional operator (?:) must be used instead of if.
2. Problem analysis
2.1 Input
- Assignment mark (out of 100)
- Midterm mark (out of 100)
- Final examination mark (out of 100)
2.2 Output
- Total course mark
- Pass or Fail
3. Process (operations)
- Declare variables to hold the input marks and calculated result.
- Define the fixed values (assignment weight, midterm weight, final weight, and pass mark) as constants.
- Print a prompt and read the three marks.
- Calculate the weighted course total.
- Decide whether the student passes or fails using the conditional operator.
- Print the total with one decimal place and the result.
4. Design the program
4.1 Variables: what and how?
Variable	Type	Why this type?
assignment	double	Marks may contain decimals.
midterm	double	Marks may contain decimals.
finalExam	double	Marks may contain decimals.
total	double	The calculated total may contain decimals.
result	string	Stores Pass or Fail.


4.2 Constants
const double ASSIGN_WEIGHT = 0.20;
const double MID_WEIGHT = 0.30;
const double FINAL_WEIGHT = 0.50;
const double PASS_MARK = 50.0;

4.3 Reading the input
cout << "Enter assignment, midterm and final marks: ";
cin >> assignment >> midterm >> finalExam;

4.4 Calculation
total = (assignment * ASSIGN_WEIGHT) +
        (midterm * MID_WEIGHT) +
        (finalExam * FINAL_WEIGHT);

result = (total >= PASS_MARK) ? "Pass" : "Fail";

4.5 Printing the result
cout << fixed << setprecision(1);

cout << "Course total: " << total << endl;
cout << "Result      : " << result << endl;

5. Write the code
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    // Step 4.1 and 4.2: Constants and variables
    const double ASSIGN_WEIGHT = 0.20;
    const double MID_WEIGHT = 0.30;
    const double FINAL_WEIGHT = 0.50;
    const double PASS_MARK = 50.0;

    double assignment, midterm, finalExam, total;
    string result;

    // Step 4.3: Read the input
    cout << "Enter assignment, midterm and final marks: ";
    cin >> assignment >> midterm >> finalExam;

    // Step 4.4: Calculate
    total = (assignment * ASSIGN_WEIGHT) +
            (midterm * MID_WEIGHT) +
            (finalExam * FINAL_WEIGHT);

    result = (total >= PASS_MARK) ? "Pass" : "Fail";

    // Step 4.5: Print the result
    cout << fixed << setprecision(1);

    cout << "Course total: " << total << endl;
    cout << "Result      : " << result << endl;

    return 0;
}

Sample run 1 (Pass)
Enter assignment, midterm and final marks: 80 60 70

Course total: 69.0
Result      : Pass

Sample run 2 (Fail)
Enter assignment, midterm and final marks: 40 30 45

Course total: 39.5
Result      : Fail

Why these choices?
- The double data type allows decimal marks.
- Constants make the program easier to maintain.
- The conditional operator ?: checks whether the student passes or fails without using if.
- setprecision(1) displays the total with one decimal place.
- The weighted formula calculates each examination's contribution to the final course total.
