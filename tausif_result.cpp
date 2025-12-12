#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    cout << "\n";
    cout << "====================================\n";
    cout << "      STUDENT RESULT CALCULATOR      \n";
    cout << "====================================\n\n";
    
    int numSubjects;
    cout << "Enter the number of subjects: ";
    cin >> numSubjects;
    
    int totalMarks = 0;
    int obtainedMarks = 0;
    
    cout << "\n--- Enter Marks for Each Subject ---\n";
    cout << "(Note: Total marks for each subject is 100)\n\n";
    
    for (int i = 1; i <= numSubjects; i++) {
        int marks;
        cout << "Subject " << i << " - Enter obtained marks: ";
        cin >> marks;
        
        // Validate marks
        while (marks < 0 || marks > 100) {
            cout << "Invalid! Marks should be between 0 and 100.\n";
            cout << "Subject " << i << " - Enter obtained marks again: ";
            cin >> marks;
        }
        
        totalMarks += 100;
        obtainedMarks += marks;
    }
    
    // Calculate percentage
    double percentage = (static_cast<double>(obtainedMarks) / totalMarks) * 100;
    
    // Display Results
    cout << "\n";
    cout << "====================================\n";
    cout << "           RESULT SUMMARY            \n";
    cout << "====================================\n\n";
    
    cout << setw(30) << "Total Marks: " << setw(10) << totalMarks << "\n";
    cout << setw(30) << "Obtained Marks: " << setw(10) << obtainedMarks << "\n";
    cout << setw(30) << "Percentage: " << fixed << setprecision(2) << setw(8) << percentage << "%\n";
    
    // Display Grade
    cout << "\n";
    cout << setw(30) << "Grade: ";
    if (percentage >= 90) {
        cout << "A+ (Excellent)\n";
    } else if (percentage >= 80) {
        cout << "A (Very Good)\n";
    } else if (percentage >= 70) {
        cout << "B (Good)\n";
    } else if (percentage >= 60) {
        cout << "C (Satisfactory)\n";
    } else if (percentage >= 50) {
        cout << "D (Passing)\n";
    } else {
        cout << "F (Fail)\n";
    }
    
    cout << "\n====================================\n";
    cout << "Thank you for using Result Calculator!\n";
    cout << "====================================\n\n";
    
    return 0;
}