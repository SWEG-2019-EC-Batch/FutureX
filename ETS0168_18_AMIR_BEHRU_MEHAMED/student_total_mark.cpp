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
    double assignmentScore, midtermScore, finalScore;
    double total;
    string result;

    //  Welcome message
    cout << "========================================" << endl;
    cout << "        STUDENT COURSE RESULT SYSTEM     " << endl;
    cout << "========================================" << endl;

    cout << "\nPlease enter your examination marks." << endl;

    cout << "Assignment mark (out of 100): ";
    cin >> assignment;

    cout << "Midterm mark (out of 100): ";
    cin >> midterm;

    cout << "Final exam mark (out of 100): ";
    cin >> finalExam;

    // Calculate total course mark
assignmentScore = assignment * ASSIGNMENT_WEIGHT;
    midtermScore = midterm * MIDTERM_WEIGHT;
    finalScore = finalExam * FINAL_WEIGHT;
    
    total = assignmentScore + midtermScore + finalScore;

    // Determine Pass or Fail using conditional operator
    result = (total >= PASS_MARK) ? "Pass" : "Fail";

    // Display student report
    cout << fixed << setprecision(1);
    
     cout << "\n\n";
    cout << "========================================" << endl;
    cout << "             STUDENT REPORT             " << endl;
    cout << "========================================" << endl;

    cout << left << setw(25) << "Assessment"
         << right << setw(10) << "Mark"
         << setw(12) << "Weighted" << endl;

    cout << "----------------------------------------" << endl;

    cout << left << setw(25) << "Assignment (20%)"
         << right << setw(10) << assignment
         << setw(12) << assignmentScore << endl;

    cout << left << setw(25) << "Midterm (30%)"
         << right << setw(10) << midterm
         << setw(12) << midtermScore << endl;

    cout << left << setw(25) << "Final Exam (50%)"
         << right << setw(10) << finalExam
         << setw(12) << finalScore << endl;

    cout << "----------------------------------------" << endl;

    cout << left << setw(25) << "TOTAL COURSE MARK:"
         << right << setw(22) << total << endl;

    cout << left << setw(25) << "Minimum pass mark:"
         << right << setw(22) << PASS_MARK << endl;

    cout << "========================================" << endl;

    cout << "FINAL RESULT: " << result << endl;

    cout << "========================================" << endl;

    cout << "\nThank you for using the Student Result System!" << endl;

    return 0;
}
