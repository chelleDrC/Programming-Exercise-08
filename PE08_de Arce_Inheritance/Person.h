#include <iostream>
using namespace std;

class Person {
private:
    string Fname;
    string Lname;
    string Gender;

public:
    string emailAdd;
    string cpNumber;
    
    // Constructors
    Person() {}
    Person(string newFname, string newLname, string newGender, string newEmail, string newCpNumber) {
        Fname = newFname;
        Lname = newLname;
        Gender = newGender;
        emailAdd = newEmail;
        cpNumber = newCpNumber;
    }

    // Set methods
    void setFname(string newFname) {
        Fname = newFname;
    }
    void setLname(string newLname) {
        Lname = newLname;
    }
    void setGender(string newGender) {
        Gender = newGender;
    }
    void setEmailAdd(string newEmailAdd) {
        emailAdd = newEmailAdd;
    }
    void setCpNumber(string newCpNumber) {
        cpNumber = newCpNumber;
    }

    // Get methods
    string getFname() {
        return Fname;
    }
    string getLname() {
        return Lname;
    }
    string getGender() {
        return Gender;
    }
    string getEmailAdd() {
        return emailAdd;
    }
    string getCpNumber() {
        return cpNumber;
    }
};
