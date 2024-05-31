// This program will Test the Employee.h file
// Programmer: Richelle S. de Arce

#include <iostream>
#include <string>
#include "Employees.h"

using namespace std;

// Function prototypes
void ProgramDisplay();
void getInputs(Employee *e1);
void Output(Employee e1);

int main() {
    Employee employees1; 
    ProgramDisplay();
    getInputs(&employees1);
    Output(employees1);
}

// Display program information
void ProgramDisplay() {
    cout << "This program will display the employee's attributes." << endl;
    cout << "Programmed by: Richelle S. de Arce" << endl << endl;
}

// Get inputs from the user
void getInputs(Employee *e1) {
    // Temporary Variables

    // Person temporary variables
    string Fname;
    string Lname;
    string Gender;
    string emailAdd;
    string cpNumber;

    // Employee specific temporary variables
    string Position;
    string Office;
    float Salary;
    string EmployeeNum;

    // Inputs
    cout << "Please provide the needed information below:" << endl;
    cout << "First Name: ";
    getline(cin, Fname); // Get the first name from the user

    cout << "Last Name: ";
    getline(cin, Lname); // Get the last name from the user

    cout << "Gender (Male/Female): ";
    cin >> Gender; // Get the gender from the user

    cout << "Employee Number (E-0001): ";
    cin >> EmployeeNum; // Get the employee number from the user

    cout << "Email Address: ";
    cin >> emailAdd; // Get the email address from the user

    cout << "Cellphone Number (09XX-XXX-XXXX): ";
    cin >> cpNumber; // Get the cellphone number from the user
    cin.ignore(); // Ignore the newline character left in the input stream

    cout << "Position: ";
    getline(cin, Position);

    cout << "Office: ";
    getline(cin, Office); 

    cout << "Salary (No space/ comma): ";
    cin >> Salary;

    // Set the values in the Employee object
    e1->setFname(Fname);
    e1->setLname(Lname);
    e1->setGender(Gender); 
    e1->setEmployeeNum(EmployeeNum); 
    e1->setEmailAdd(emailAdd); 
    e1->setCpNumber(cpNumber); 
    e1->setPosition(Position);
    e1->setOffice(Office); 
    e1->setSalary(Salary); 
}

// Output employee information
void Output(Employee e1) {
    using namespace std;

    cout << "\n\nHi, " << e1.getFname() << " " << e1.getLname() << " !" << endl;
    cout << "Welcome to the company and congratulations!" << endl;
    cout << "We are pleased to inform you that you are hired as " << endl;
    cout << e1.getPosition() << " in the " << e1.getOffice() << " department." << endl;
    cout << "Your Employee number is " << e1.getEmployeeNum() << "." << endl;

    cout << endl << endl << "Please check your given information below." << endl;
    cout << "First Name: " << e1.getFname() << endl;
    cout << "Last Name: " << e1.getLname() << endl;
    cout << "Gender: " << e1.getGender() << endl;
    cout << "Email Address: " << e1.getEmailAdd() << endl;
    cout << "Cellphone Number: " << e1.getCpNumber() << endl;
    cout << "Position: " << e1.getPosition() << endl;
    cout << "Office: " << e1.getOffice() << endl;
    cout << "Salary (No spaces/comma): " << e1.getSalary() << endl;
    cout << "Employee Number: " << e1.getEmployeeNum() << endl;

    cout << "Thank you for joining our company!" << endl;
}