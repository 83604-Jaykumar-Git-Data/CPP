#include<iostream>
using namespace std;

class Student{
    private:
    int rollno;
    string name;
    int marks;

    public:
    void initDate(){
    }

    void printStudentOnConsole(){
        cout<<"rollno: " << rollno << endl;
        cout<<"name: " << name << endl;
        cout<<"marks: " <<marks << endl;
    }

    void acceptStudentFromConsole(){
        cout<<"Enter roll no : ";
        cin>>rollno;
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter marks: ";
        cin>>marks;
    }
};

int main(){

    int choice;
    Student s;
    s.initDate();

    do{
       cout<<"0.EXIT"<<endl;
       cout<<"1.Enter details: "<<endl;
       cout<<"2.Display details: "<<endl; 
       cout<<"Enter choice: ";
       cin>>choice;

       switch(choice){
        case 0:
        cout<<"Thank you for using the app...."<<endl;
        break;
        case 1:
        s.acceptStudentFromConsole();
        break;
        case 2:
        s.printStudentOnConsole();
        break;
        default:
        cout<<"Thank you for using the app... ";
        break;
       }
    }
    while(choice != 0);
    return 0;
}