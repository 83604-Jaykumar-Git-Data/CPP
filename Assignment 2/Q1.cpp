#include <iostream>
using namespace std;
class Box{
    private:
    int length;
    int width;
    int height;
    
    public:
    Box(){
    length=10;
    width=20;
    height=30;
    }

    Box(int value){
    length=value;
    width=value;
    height=value;
    }

    Box(int l,int w,int h){
    length=l;
    width=w;
    height=h;
    }

    void volume_of_Box(){
    int result=length*width*height;
    cout<<result<<endl;
    }
};


int main(){

    Box b1;
    int choice;
    int single;
    int l;
    int w;
    int h;

    do{
    cout<<" 0. Exit "<<endl;
    cout<<" 1. Calculate Volume with default values "<<endl;
    cout<<" 2. Calculate Volume with same length,breadth and height "<<endl;
    cout<<" 3. Calculate Volume with different length,breadth & height values "<<endl;
    cin>>choice;
    switch (choice)
    {
    case 0:{
    cout<<"Thank you for using the app...."<<endl;
    break;
    }
    case 1:{
    Box b1;
    b1.volume_of_Box();
    break;
    }
    case 2:{
    cout<<"Enter Single value for L,B & H ";
    cin>>single;
    Box b2(single);
    b2.volume_of_Box();
    break;
    }
    case 3:{
    cout<<"Enter length, width & height ";
    cin>>l>>w>>h;
    Box b3(l,h,w);
    b3.volume_of_Box();
    }
    default:
    cout<<"enter valid value";
    break;
    }
    }while(choice!=0);
    return 0;
}