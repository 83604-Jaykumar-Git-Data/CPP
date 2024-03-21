#include <iostream>
using namespace std;

class Tollbooth{
    int totalCount;
    int payCarCount;
    double cashTotal;

    public:
    Tollbooth(){
        this->totalCount = 0;
        this->payCarCount = 0;
        this->cashTotal = 0;
    }
    void payingcar(){
        this->totalCount++;
        this->payCarCount++;
        this->cashTotal += 50;
    }
    void nopaycar(){
        this->totalCount++;
    }
    int getTotalCount(){
        return totalCount;
        // return this->totalCount;
    }
    int getPayCarCount(){
        // return this->payCarCount;
        return payCarCount;
    }

    void printOnConsole(){
    cout << "Total number of cars: " << totalCount << endl;
    cout << "Total amount of money collected: " << cashTotal << endl;
    cout << "Number of cars paying: " << payCarCount << endl;
    cout << "Number of not paying cars: " <<payCarCount << endl;
    }

};

int main()
{
    int choice = 0;
    Tollbooth t1;
    do{
    cout<<"0.exits"<<endl;
    cout<<"1.Enter a Paying Car"<<endl;
    cout<<"2.Enter a non paying car"<<endl;
    cout<<"3.Print on Console"<<endl;
    cout<<"Enter your choice: ";
    cout<<endl;
    cin>>choice;
    switch(choice){
    case 0:{
    cout<<"Thank you for using the app...."<<endl;
    break;
    }
    case 1:
    cout<<endl;
    t1.payingcar();  
    break;
    case 2:
    cout<<endl;
    t1.nopaycar();
    break;
    case 3:
    t1.printOnConsole();
    break;    
    default:
    cout<<"Enter correct choice";
    break;
    }
    }while(choice!=0);
    return 0;
}