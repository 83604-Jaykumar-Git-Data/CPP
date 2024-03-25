#include<iostream>
using namespace std;

class Date{
int day;
int month;
int year;
public:
void acceptDate()
{
    cout << "Enter day - ";
    cin  >> day;
    cout << "Enter month - ";
    cin  >> month;
    cout << "Enter year - ";
    cin  >> year;
}
void displayDate()
{
    cout << day << "/" << month << "/" << year << endl;
}
};

class Person{
string name;
string address;
// Date birthDate;
Date dob;
public:
// call acceptDate inside this fun to accept birthdate
void acceptData()
{ 
    cout << "Enter name: ";
    cin  >> name;
    cout << "Enter Address: ";
    cin  >> address;
    cout << "DOB: ";
    dob.acceptDate();
}
// call displayDate inside this fun to display birthdate
void displayData(){
    cout << "name: " << name << endl;
    cout << "address: " << address << endl;
    dob.displayDate();
}
};

class Employee:public Person{
    private:
int empid;
string dept;
double salary;
Person p;
Date doj;
// call acceptDate inside this fun to accept joindate // done
// call acceptData of person inside this fun to accept person details
public:
void acceptData()
{   
    p.acceptData();
    cout << "Enter empid: ";
    cin  >> empid;
    cout << "Enter Dept: ";
    cin  >> dept;
    cout << "Enter salary: ";
    cin  >> salary;
    cout<<"Date of Joining: "<<endl;
    doj.acceptDate();
}

// call displayDate inside this fun to display joindate // done
// call displayData of person inside this fun to display person details
void displayData()
{   
    cout << "Empid: " << empid << endl;
    cout << "Dept: " << dept << endl;
    cout << "Salary: " << salary << endl;
    doj.displayDate();
    p.displayData();
}
};

int main()
{
    // Person p;
    // p.acceptData();
    // p.displayData();
    Employee e;
    e.acceptData();
    e.displayData();

    // Person *ptr = new Employee;
    // ptr-> acceptData();
    // ptr-> displayData();
    // delete ptr;
    // return 0;
}