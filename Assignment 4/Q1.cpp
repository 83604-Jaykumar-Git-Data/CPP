#include<iostream>
using namespace std;

class Stack{
    private : 
    int *ptr;
    int top;
    int size;

    public:
    Stack( int size)
    {
        ptr = new int [size];
        top = -1;
        this->size = size;
    }

    void push(int element)
    {
        if(!is_stack_full())
        {
            top++;
            ptr[top] = element;
            cout<<element<<" is pushed onto the stack"<<endl;
        }
        else 
            cout<<"Stack is Overflow "<<endl;
    }

    void pop()
    {
        if(!is_stack_empty())
        {
            top--;
            cout<<ptr[top]<<" is popped from the stack"<<endl;
        }
        else 
            cout<<"Stack is Underflow "<<endl;
    }
    void peek()
    {
        if(!is_stack_empty())
        {
            cout<<ptr[top]<<endl;
        }
        else 
            cout<<"Stack is Underflow "<<endl;
    }
    bool is_stack_full()
    {
        if(top == size-1)
            return true;
        else 
            return false;
    }

    bool is_stack_empty()
    {
        if (top == -1)
            return true;
        else
            return false;
    }

    void display()
    {
        if(!is_stack_empty())
        {
            cout<<"Stack Elemnts are : ";
            for(int i = 0;i<= top;i++)
            {
                cout<<ptr[i]<<endl;
            }
        }
        else 
            cout<<"Stack is Undeflow "<<endl;
    }

    ~Stack()
    {
        delete [] ptr;
        ptr = NULL;
    }
};

int main()
{
    int size;
    cout<<"Enter an Size of Stack : ";
    cin>>size;

    Stack s(size);
    int choice;
    do
    {
        cout<<"0: Exit "<<endl;
        cout<<"1: Push "<<endl;
        cout<<"2: Pop "<<endl;
        cout<<"3: Peek "<<endl;
        cout<<"4: Display "<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;

        switch(choice)
        {
            case 0: 
            cout<<"Thank You !!"<<endl;
            break;

            case 1:
            {
                int ele;
                cout<<"Enter an element : ";
                cin >>ele;
                s.push(ele);
            }
            break;

            case 2:
            s.pop();
            break;

            case 3:
            s.peek();
            break;

            case 4:
            s.display();
            break;

            default :
            cout<<"Invalid Choice !!"<<endl;
            break; 
        }

    }while(choice != 0);
    return 0;
}
