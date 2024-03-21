#include <iostream>
using namespace std;

class Address{
    string building, street,  city;
    int pin;

public:
    Address(){
        building=" ";
        street=" ";
        city=" ";
        pin = 0;
    }
    Address(string b,string s,string city,int pin){
        building=b;
        street=s;
        this->city=city;
        this->pin=pin;
    }

void setBuilding(string b){
    this->building=b;
}
void setStreet(string s){
    this->street=s;
}
void setCity(string city){
    this->city=city;
}
void setPin(int pin){
    this->pin=pin;
}

string getBuilding(){
    return building;
}
string getStreet(){
    return street;
}
string getCity(){
    return city;
}
int getpin(){
    return pin;
}

void acceptAddress(){
    cout<<"Enter Building: "<<endl;
    cin>>building;
    cout<<"Enter Street: "<<endl;
    cin>>street;
    cout<<"Enter City: "<<endl;
    cin>>city;
    cout<<"Enter Pincode: "<<endl;
    cin>>pin;
}

void Display(){
    cout<<"Building: "<<building<<endl;
    cout<<"Street: "<<street<<endl;
    cout<<"City: "<<city<<endl;
    cout<<"Pincode: "<<pin<<endl;
}

};
int main(){
    Address b1;

    b1.acceptAddress();
    b1.Display(); 

}