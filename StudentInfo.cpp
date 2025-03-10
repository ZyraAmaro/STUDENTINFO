
#include "StudentInfo.h"// StudentInfo.cpp

// Constructor to initialize student data
Student::Student(string name, int rollNumber) : name(name), rollNumber(rollNumber) {}

// Add grade to the student's record
void Student::addGrade(double grade) {
    grades.push_back(grade);
}

// Calculate the average grade of the student
double Student::calculateAverageGrade() const {
    double total = 0;
    for (double grade : grades) {
        total += grade;
    }
    return grades.empty() ? 0 : total / grades.size();
}

// Display student information
void Student::displayStudentInfo() const {
    cout << "Student Name: " << name << endl;
    cout << "Roll Number: " << rollNumber << endl;
    cout << "Grades: ";
    for (double grade : grades) {
        cout << grade << " ";
    }
    cout << endl;
    cout << "Average Grade: " << calculateAverageGrade() << endl;
}

//getName method implementation
string Student::getName() const {
    return name;
}

// Add a student to the manager's list
void StudentManager::addStudent(const Student& student) {
    students.push_back(student);
}

// Display all students' information
void StudentManager::displayAllStudentsInfo() const {
    if (students.empty()) {
        cout << "No students available!" << endl;
    }
    else {
        for (const Student& student : students) {
            student.displayStudentInfo();
            cout << "-----------------------------------" << endl;
        }
    }
}

// Search for a student by name
void StudentManager::searchStudentByName(const string& name) const {
    bool found = false;
    for (const Student& student : students) {
        if (student.getName() == name) {
            student.displayStudentInfo();
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Student with name " << name << " not found!" << endl;
    }
}

