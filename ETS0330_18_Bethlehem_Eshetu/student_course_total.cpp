// Task 1: Student course total
//
// (a) Inputs and outputs
//     Inputs : assignment mark, midterm mark, final mark (each out of 100)
//     Outputs: course total (one decimal place) and the word Pass or Fail
//
// (b) Process
//     1. Read the assignment, midterm and final marks.
//     2. Calculate total = 20% of assignment + 30% of midterm + 50% of final.
//     3. Use the conditional operator to choose "Pass" if total >= 50, otherwise "Fail".
//     4. Print the total with one decimal place and the result.
//
// (c) Program

#include <iostream>

using namespace std;

int main()
{
    // constants
    const double ASSIGNMENT_WEIGHT = 0.20;
    const double MIDTERM_WEIGHT = 0.30;
    const double FINAL_WEIGHT = 0.50;
    const double PASS_MARK = 50;

    double assignment, midterm, finalExam;

    // input
    cout << "Enter assignment mark (out of 100): ";
    cin >> assignment;
    cout << "Enter midterm mark (out of 100): ";
    cin >> midterm;
    cout << "Enter final mark (out of 100): ";
    cin >> finalExam;

    // process
    double total = assignment * ASSIGNMENT_WEIGHT + midterm * MIDTERM_WEIGHT + finalExam * FINAL_WEIGHT;

    string result = (total >= PASS_MARK) ? "Pass" : "Fail";

    // output
    cout << fixed << setprecision(1);
    cout << "Course total: " << total << endl;
    cout << "Result: " << result << endl;

    return 0;
}
