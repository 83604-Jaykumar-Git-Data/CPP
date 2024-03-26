#include<iostream>
using namespace std;

class Date{
    private:
    int day;
    int month;
    int year;

    public:
    void acceptDate(){
    cout<<"enter day";
    cin>> day;
    cout<<"Enter month";
    cin>>month;
    cout<<"Enter year";
    cin >> year;
    }
    void displayDate(){
    cout<< day <<"/" << month <<"/" << year<<endl;
    }

};

class Person : public Date{
    private:
    string name;
    string address;
    Date dob;

    public:
    void acceptPerson()
    {
        cout<<"Enter person name: ";
        cin>>name;
        cout<<"Enter person Address: ";
        cin>>address;
        cout<<"Enter Dob: ";
        dob.acceptDate();
    }
    void displayPerson()
    {
        cout<<"Person name: " <<name <<endl;
        cout<<"Person address: " <<address<<endl;
        dob.displayDate();
    }
};

class Employee : public Date{
    private:
    int id;
    double sal;
    string dept;
    Date doj;

    public:
    void acceptEmployee()
    {
        cout<<"enter id: ";
        cin>>id;
        cout<<"enter salary: ";
        cin>>sal;
        cout<<"Dept name: ";
        cin>>dept;
        cout<<"Enter date of joining: ";
        doj.acceptDate();
    }
    void displayEmployee()
    {
        cout<<"Employee id:" <<endl;
        cout<<"Employee sal:" <<endl;
        cout<<"Employee dept:" <<endl;
        doj.displayDate();
    }
};

int main(){
    // Date d;
    Person p;
    Employee e;

    int choice;

    do{
        cout<<"0: Exit" <<endl;
        cout<<"1: Accept Person: "<<endl;
        cout<<"2: Display Person: "<<endl;
        cout<<"3: Accept Employee: "<<endl;
        cout<<"4: Display Employee: "<<endl;
        cout<<"Enter Choice: ";
        cin>>choice;
        switch(choice)
        {
            case 0:
            cout<<"thank you for using the app: "<<endl;
            break;

            case 1:
            p.acceptPerson();
            break;

            case 2:
            p.displayPerson();
            break;

            case 3:
            e.acceptEmployee();
            break;

            case 4:
            e.displayEmployee();
            break;

            default:
            cout<<"Invalid Choice  "<<endl;
            break;
        }
    }
    while(choice != 0);
    return 0;
}