#include <iostream>

using namespace std;

class Student {
private:
    int rollno;
    float marks1, marks2, marks3;

public:
    // Member function to accept student information
    void acceptInfo() {
        cout << "Enter roll number: ";
        cin >> rollno;
        cout << "Enter marks for subject 1: ";
        cin >> marks1;
        cout << "Enter marks for subject 2: ";
        cin >> marks2;
        cout << "Enter marks for subject 3: ";
        cin >> marks3;
    }

    // Member function to display student information
    void display() {
        cout << "Roll Number: " << rollno << endl;
        cout << "Marks for subject 1: " << marks1 << endl;
        cout << "Marks for subject 2: " << marks2 << endl;
        cout << "Marks for subject 3: " << marks3 << endl;
    }

    // Member function to calculate total marks
    float calculateTotal() {
        return marks1 + marks2 + marks3;
    }

    // Member function to calculate percentage
    float calculatePercentage() {
        return (calculateTotal() / 3.0);
    }

    // Member function to determine grade
    char calculateGrade() {
        float percentage = calculatePercentage();
        if (percentage >= 90) {
            return 'A';
        } else if (percentage >= 80) {
            return 'B';
        } else if (percentage >= 70) {
            return 'C';
        } else if (percentage >= 60) {
            return 'D';
        } else {
            return 'F';
        }
    }
};

int main() {
    Student student;

    // Accept student information
    student.acceptInfo();

    // Display student information
    cout << "\nStudent Information:\n";
    student.display();

    // Calculate and display total marks, percentage, and grade
    cout << "\nTotal Marks: " << student.calculateTotal() << endl;
    cout << "Percentage: " << student.calculatePercentage() << "%" << endl;
    cout << "Grade: " << student.calculateGrade() << endl;

    return 0;
}
