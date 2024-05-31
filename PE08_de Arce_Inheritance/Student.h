#include <iostream>
#include "Person.h"

using namespace std;

class Student : public Person {
private:
    string StudentNum;
public:
    string Course;
    string Department;
    string College;

    // Setter function for StudentNum
    void setStudentNum(string num) {
        StudentNum = num;
    }
    // Setter function for Course
    void setCourse(string course) {
        Course = course;
    }

    // Setter function for Department
    void setDepartment(string department) {
        Department = department;
    }
    // Setter function for College
    void setCollege(string college) {
        College = college;
    }


    // Getter function for StudentNum
    string getStudentNum() {
        return StudentNum;
    }
    // Getter function for Course
    string getCourse() {
        return Course;
    }
    // Getter function for Department
    string getDepartment() {
        return Department;
    }
    // Getter function for College
    string getCollege() {
        return College;
    }
};