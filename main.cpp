#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int numCourses;
    float grade, creditHours;
    float totalCredits = 0, totalGradePoints = 0;

    cout << "===== CGPA Calculator =====" << endl;
    cout << "Enter the number of courses: ";
    cin >> numCourses;

    float grades[100], credits[100];

    for (int i = 0; i < numCourses; i++) {
        cout << "\nCourse " << i + 1 << endl;

        cout << "Enter Grade: ";
        cin >> grades[i];

        cout << "Enter Credit Hours: ";
        cin >> credits[i];

        totalCredits += credits[i];
        totalGradePoints += grades[i] * credits[i];
    }

    float gpa = 0, cgpa = 0;

    if (totalCredits > 0) {
        gpa = totalGradePoints / totalCredits;
        cgpa = gpa;  
    }
if(numCourses >=0)
{
    cout << "\n===== Course Details =====" << endl;
    for (int i = 0; i < numCourses; i++) {
        cout << "Course " << i + 1
             << " -> Grade: " << grades[i]
             << ", Credit Hours: " << credits[i] << endl;
    }

    cout << "\n===== Result =====" << endl;
    cout << "Total Credits      : " << totalCredits << endl;
    cout << "Total Grade Points : " << totalGradePoints << endl;
    cout << fixed << setprecision(2);
    cout << "Semester GPA       : " << gpa << endl;
    cout << "Overall CGPA       : " << cgpa << endl;
}
else
{
    cout<<"INVALID INPUT";
   
}

    return 0;
}
