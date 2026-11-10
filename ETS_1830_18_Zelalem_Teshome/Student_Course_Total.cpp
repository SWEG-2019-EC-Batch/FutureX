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
