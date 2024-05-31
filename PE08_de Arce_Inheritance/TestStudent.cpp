//This program will Test the Student.h file
//Programmer: Richelle S. de Arce

#include <iostream>
#include <string>
#include "Student.h" // Include the header file for the Student class

using namespace std;

void ProgramDisplay(); // Function prototype for displaying program description
void getInputs(Student *s1); // Function prototype for getting inputs from the user
void Output(Student s1); // Function prototype for displaying the output

int main() {
    Student student1; // Create an instance of the Student class

    ProgramDisplay(); // Will display program description
    getInputs(&student1); // Get inputs from the user
    Output(student1); // Display the output

    return 0;
}

void ProgramDisplay() {
    cout << "This program will display the students' attributes." << endl;
    cout << "Programmed by: Richelle S. de Arce" << endl << endl;
}

void getInputs(Student *s1) {
    // Temporary Variables
    string Fname;
    string Lname;
    string Gender;
    string emailAdd;
    string cpNumber;

    //Temporary variables for students
    string Course;
    string Department;
    string College;
    string StudentNum;

    // Inputs
    cout << "Please provide the needed information below:" << endl;
    cout << "First Name: ";
    getline(cin, Fname); // Get the first name from the user

    cout << "Last Name: ";
    getline(cin, Lname); // Get the last name from the user

    cout << "Gender (Male/Female): ";
    cin >> Gender; // Get the gender from the user

    cout << "Student Number (20XX-XXXXX): ";
    cin >> StudentNum; // Get the student number from the user

    cout << "Email Address: ";
    cin >> emailAdd; // Get the email address from the user

    cout << "Cellphone Number (09XX-XXX-XXXX): ";
    cin >> cpNumber; // Get the cellphone number from the user
    cin.ignore(); // Ignore the newline character left in the input stream

    cout << "Course: ";
    getline(cin, Course); // Get the course from the user

    cout << "Department: ";
    getline(cin, Department); // Get the department from the user

    cout << "College: ";
    getline(cin, College); // Get the college from the user

    // Setting values of Student
    s1->setFname(Fname); // Set the first name of the student
    s1->setLname(Lname); // Set the last name of the student
    s1->setGender(Gender); // Set the gender of the student
    s1->setStudentNum(StudentNum); // Set the student number of the student
    s1->setEmailAdd(emailAdd); // Set the email address of the student
    s1->setCpNumber(cpNumber); // Set the cellphone number of the student
    s1->setCourse(Course); // Set the course of the student
    s1->setDepartment(Department); // Set the department of the student
    s1->setCollege(College); // Set the college of the student
}

void Output(Student s1) {
    cout << endl << endl << "Hi, " << s1.getFname() << " " << s1.getLname() << " !" << endl;
    cout << "Welcome to UP Mindanao and congratulations!" << endl;
    cout << "We are pleased to inform you that you are admitted in " << endl;
    cout << "the " << s1.getCourse() << " program under the Department of " << endl << s1.getDepartment() << " ,";
    cout << s1.getCollege() << endl;
    cout << "Your Student number is " << s1.getStudentNum() << "." << endl;

    cout << "Please Check your given Informations Below." << endl;
    cout << "First Name: " << s1.getFname() << endl;
    cout << "Last Name: " << s1.getLname() << endl;
    cout << "Gender: " << s1.getGender() << endl;
    cout << "Email Address: " << s1.getEmailAdd() << endl;
    cout << "Cellphone Number: " << s1.getCpNumber() << endl;
    cout << "Course: " << s1.getCourse() << endl;
    cout << "Department: " << s1.getDepartment() << endl;
    cout << "College: " << s1.getCollege() << endl;
    cout << "Student Number: " << s1.getStudentNum() << endl;

    cout << "Thank you for choosing UP Mindanao!" << endl;
}
