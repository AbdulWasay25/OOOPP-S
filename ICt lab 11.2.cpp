#include <iostream>
#include <string>
using namespace std;
class Person {
private:
    string name;
    int age;
public:
    string getName() const {
        return name;
    }
    int getAge() const {
        return age;
    }
    void setName(const string& newName) {
        name = newName;
    }
    void setAge(int newAge) {
        age = newAge;
    }
    virtual void displayInfo() const {
        cout << "Name: " << name<< endl<< "Age: " << age << " years" << endl;
    }
};
class Employee : public Person {
private:
    int employeeID;
public:
    void setEmployeeID(int id) {
        employeeID = id;
    }
    void displayInfo() const override {
        Person::displayInfo();
        cout << "Employee ID: " << employeeID << endl;
    }
};
class Student : public Person {
private:
    int studentID;
public:
    void setStudentID(int id) {
        studentID = id;
    }
    void displayInfo() const override {
        Person::displayInfo();
        cout << "Student ID: " << studentID << endl;
    }
};
int main() {
    Employee employee;
    Student student;
    employee.setName("Ammar Ahmed");
    employee.setAge(22);
    employee.setEmployeeID(0652);
    student.setName("Abdul Wasay");
    student.setAge(18);
    student.setStudentID(0744);
    cout << "Employee Info:" << endl;
    employee.displayInfo();
    cout << "\nStudent Info:" << endl;
    student.displayInfo();
    return 0;
}
