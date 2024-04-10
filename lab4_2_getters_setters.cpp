#include <iostream>
#include <string>

using namespace std;

class Person {
private:
    string name;
    int age;
    string city;

public:
    // Default constructor
    Person() {
        name = "";
        age = 0;
        city = "";
    }

    // Parameterized constructor
    Person(string name_val, int age_val, string city_val) {
        name = name_val;
        age = age_val;
        city = city_val;
    }

    // Getter and Setter for name
    void setName(string name_val) {
        name = name_val;
    }

    string getName() const {
        return name;
    }

    // Getter and Setter for age
    void setAge(int age_val) {
        age = age_val;
    }

    int getAge() const {
        return age;
    }

    // Getter and Setter for city
    void setCity(string city_val) {
        city = city_val;
    }

    string getCity() const {
        return city;
    }

    // Display function
    void display() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "City: " << city << endl;
    }
};

int main() {
    // Create object using default constructor
    Person person1;
    person1.setName("John");
    person1.setAge(30);
    person1.setCity("New York");

    cout << "Person 1 details:\n";
    person1.display();

    // Create object using parameterized constructor
    Person person2("Alice", 25, "London");
    cout << "\nPerson 2 details:\n";
    person2.display();

    // Using getters to retrieve information
    cout << "\nPerson 2's name: " << person2.getName() << endl;
    cout << "Person 2's age: " << person2.getAge() << endl;
    cout << "Person 2's city: " << person2.getCity() << endl;

    return 0;
}
