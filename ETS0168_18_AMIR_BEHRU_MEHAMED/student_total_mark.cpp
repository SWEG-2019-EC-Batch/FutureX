#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    // Declare constants
    const double ASSIGNMENT_WEIGHT = 0.20;
    const double MIDTERM_WEIGHT = 0.30;
    const double FINAL_WEIGHT = 0.50;
    const double PASS_MARK = 50.0;

    // Declare variables
    double assignment, midterm, finalExam;
    double total;
    string result;

    // Read input
    cout << "Enter assignment, midterm and final marks: ";
    cin >> assignment >> midterm >> finalExam;

    // Calculate total course mark
    total = (assignment * ASSIGNMENT_WEIGHT)
          + (midterm * MIDTERM_WEIGHT)
          + (finalExam * FINAL_WEIGHT);

    // Determine Pass or Fail using conditional operator
    result = (total >= PASS_MARK) ? "Pass" : "Fail";

    // Display output
    cout << fixed << setprecision(1);
    cout << "Total mark: " << total << endl;
    cout << "Result: " << result << endl;

    return 0;
}
