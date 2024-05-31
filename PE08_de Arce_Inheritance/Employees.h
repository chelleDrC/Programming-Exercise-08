#include <iostream>
#include "Person.h"
using namespace std;

class Employee : public Person {
    private:
        string EmployeeNum;
    public:
        string Position;
        string Office;
        float Salary;

        // Setter function for EmployeeNum
        void setEmployeeNum(string num) {
            EmployeeNum = num;
        }

        void setPosition(string position) {
            Position = position;
        }

        void setOffice(string office) {
            Office = office;
        }

        void setSalary (float salary) {
            Salary = salary;
        }



        // Getter function for EmployeeNum
        string getEmployeeNum() {
            return EmployeeNum;
        }

        string getPosition (){
            return Position;
        }

        string getOffice () {
            return Office;
        }

        float getSalary () {
            return Salary;
        }

};