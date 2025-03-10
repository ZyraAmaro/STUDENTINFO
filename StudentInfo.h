
// StudentInfo.h
#ifndef STUDENTINFO_H
#define STUDENTINFO_H

#include <string>
#include <vector>
#include <iostream>

using namespace std;

// Interface for student-related operations
class IStudent {
public:
    virtual void displayStudentInfo() const = 0;
    virtual double calculateAverageGrade() const = 0;
    virtual ~IStudent() = default;
};

// Student class that follows OOP and SOLID principles
class Student : public IStudent {
private:
    string name;
    int rollNumber;
    vector<double> grades;  // Student grades

public:
    // Constructor to initialize student data
    Student(string name, int rollNumber);

    // Functions to add grades
    void addGrade(double grade);

    // Calculate the average grade
    double calculateAverageGrade() const override;

    // Display the student's information
    void displayStudentInfo() const override;

    string getName() const;
};

// StudentManager class to manage multiple students
class StudentManager {
private:
    vector<Student> students;

public:
    // Add a student to the manager
    void addStudent(const Student& student);

    // Display information of all students
    void displayAllStudentsInfo() const;

    // Search for a student by name
    void searchStudentByName(const string& name) const;
};

#endif // STUDENTINFO_H

class StudentInfo
{
};



