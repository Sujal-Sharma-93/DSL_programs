#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int rollNumber;
    string name;
    float marks;

public:
    Student() {  // Default constructor
        rollNumber = 0;
        name = "";
        marks = 0.0;
    }

    Student(int roll, string n, float m) {
        rollNumber = roll;
        name = n;
        marks = m;
    }

    ~Student() {
        cout << "Student object for " << name << " (Roll: " << rollNumber << ") deleted." << endl;
    }

    void input() {
        cout << "Enter Roll Number, Name, Marks: ";
        cin >> rollNumber >> name >> marks;
    }

    void display() {
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    Student* students = new Student[n];  // dynamically allocate array

    for (int i = 0; i < n; i++) {
        cout << "Enter details for student " << i+1 << ":" << endl;
        students[i].input();
    }

    cout << "\nDisplaying student details:\n";
    for (int i = 0; i < n; i++) {
        students[i].display();
        cout << endl;
    }

    delete[] students;  // release memory for array

    return 0;
}