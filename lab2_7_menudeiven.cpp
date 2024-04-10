#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.14;

// Function prototypes
void computeCircleArea();
void computeRectangleArea();
void computeTriangleArea();

int main() {
    int choice;

    do {
        cout << "Menu:\n";
        cout << "1. Compute area of circle\n";
        cout << "2. Compute area of rectangle\n";
        cout << "3. Compute area of triangle\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                computeCircleArea();
                break;
            case 2:
                computeRectangleArea();
                break;
            case 3:
                computeTriangleArea();
                break;
            case 4:
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}

void computeCircleArea() {
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    double area = PI * radius * radius;
    cout << "Area of the circle: " << area << endl;
    cout<<"\n\n";
}

void computeRectangleArea() {
    double length, width;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    double area = length * width;
    cout << "Area of the rectangle: " << area << endl;
        cout<<"\n\n";

}

void computeTriangleArea() {
    double base, height;
    cout << "Enter the base length of the triangle: ";
    cin >> base;
    cout << "Enter the height of the triangle: ";
    cin >> height;
    double area = 0.5 * base * height;
    cout << "Area of the triangle: " << area << endl;
        cout<<"\n\n";

}
