// main.cpp
#include "StudentInfo.h"
#include <iostream>
#include <memory>


using namespace std;

int main() {
    StudentManager manager;

    // Creating student records
    Student student1("Nika", 101);
    student1.addGrade(90.0);
    student1.addGrade(85.5);
    student1.addGrade(88.0);

    Student student2("Carlo", 102);
    student2.addGrade(75.0);
    student2.addGrade(70.0);
    student2.addGrade(80.5);

    Student student3("Lexter", 103);
    student3.addGrade(92.0);
    student3.addGrade(89.0);
    student3.addGrade(85.0);

    // Adding students to manager
    manager.addStudent(student1);
    manager.addStudent(student2);
    manager.addStudent(student3);

    int choice;
    do {
        // Displaying menu
        cout << "Student Information Management System" << endl;
        cout << "1. Display All Students Info" << endl;
        cout << "2. Search Student by Name" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        cin.ignore();  // To ignore the newline character

        if (choice == 1) {
            manager.displayAllStudentsInfo();
        }
        else if (choice == 2) {
            string name;
            cout << "Enter student's name: ";
            getline(cin, name);
            manager.searchStudentByName(name);
        }
        else if (choice == 3) {
            cout << "Exiting the program." << endl;
        }
        else {
            cout << "Invalid choice, try again." << endl;
        }
    } while (choice != 3);

    return 0;
}


