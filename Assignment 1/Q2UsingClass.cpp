#include<iostream>

using namespace std;

class Date{
    private:
    int day;
    int month;
    int year;

    public:
    void initDate(){    }

    void printDateOnConsole(){
        cout<<"Date is : "<<day << "/ " <<month << "/ " << year << endl;
    }

    void acceptDateFromConsole(){
        cout<<"Enter date: ";
        cin>>day;
        cout<<"Enter Month ";
        cin>>month;
        cout<<"Enter Year ";
        cin>>year;
    }

    bool isLeapYear(){
        if(year%4==0 && year % 100!=0 || year % 400 ==0)
        // cout<<"leap year"<<endl; // neither does this work;
        return true;
        // cout<<"leap year"<<endl; // cannot do this, as it is expecting a boolean value i.e is true or false
        else
        // cout <<"not a leap year"<<endl;
        return false;
    }
};

int main(){
    
    int choice;

    Date d;
    d.initDate();

    do{
        cout<<"0. EXIT "<<endl;
        cout<<"1. Enter date"<<endl;
        cout<<"2. Display Date"<<endl;
        cout<<"3. check for leap year"<<endl;
        cout<<"Enter your choice:"<<endl;
        cin>>choice;

        switch(choice){
            case 0:
            cout<<"Thank you for using the app"<<endl;
            break;
            case 1:
            d.acceptDateFromConsole();
            break;
            case 2:
            d.printDateOnConsole();
            break;
            case 3:
            if( d.isLeapYear())
            {cout<<"leap year"<<endl;}
            else
            cout<<"not a leap year"<<endl;

            break;
            default :
            cout<<"Thank you for using the app";
            break;
        }

    }while(choice != 0);
    return 0;
}