#include<iostream>
using namespace std;

class Employee
{
    int empId;
    double salary;

    public:
    Employee()
    {
        cout<<"Parameterless Constructor of Employee "<<endl;
        empId = 0;
        salary = 0;
    }

    Employee(int id,double salary)
    {
        cout<<"Parameterized Constructor of Employee "<<endl;
        this->empId = id;
        this->salary = salary;
    }
    virtual void accept()
    {
        cout<<"Enter an Employee Id : "<<endl;
        cin>>empId;
        cout<<"Enter an Employee Salary : "<<endl;
        cin>>salary;
    }
    
    virtual void display()
    {
        cout<<"Employee Id : "<<empId<<endl;
        cout<<"Employee Salary : "<<salary<<endl;
    }

    virtual ~Employee()
    {
        cout<<"Destructor of Employee "<<endl;
    }
};

class Manager : virtual public Employee
{
    private:
    double bonus;


    protected:
    void acceptManager()
    {
        cout<<"Enter an bonus : ";
        cin>>bonus;
    }

    void displayManager()
    {
        cout<<"Bonus : "<<bonus<<endl;
    }
    public:
    Manager()
    {
        bonus = 50;
        cout<<"Parameterless constructor of Manager"<<endl;
    }
    Manager(int id,double salary,double bonus):Employee(id,bonus)
    {
       cout<<"Paramterized Constructor of Manager"<<endl;
    }

    void accept()
    {
        Employee::accept();
        acceptManager();
    }   

    void display()
    {
        Employee::display();
        displayManager();
    }
    ~Manager(){
        cout<<"Destructor of Manager"<<endl;
    }
};


class Salesman :virtual public Employee
{

    private:
    double commission;

    protected:
    void acceptSalesman()
    {
        cout<<"Enter an commission:";
        cin>>commission;
    }

    void displaySalesman()
    {
        cout<<"Commission : "<<commission<<endl;
    }
    public:
    Salesman()
    {
        commission = 0;
        cout<<"Default Constructor of Salesman"<<endl;
    }

    Salesman(int id,double salary,double commission):Employee(id,salary)
    {
        this->commission = commission;
        cout<<"Paramterized Constructor of Salesman"<<endl;
    }

    void accept()
    {
        Employee::accept();
        acceptSalesman();
    }

    void display()
    {
        Employee::display();
        displaySalesman();
    }
    ~Salesman()
    {
        cout<<"Destructor of Salesman"<<endl;
    }
};

class SalesManager: public Manager, public Salesman
{
    public:
    SalesManager()
    {
        cout<<"Parameterless Constructor of Salesmanager "<<endl;
    }

    SalesManager(int id,double salary,double bonus,double commmission) : Manager(id,salary,bonus),Salesman(salary,bonus,commmission)
    {
        cout<<"Paramterized Constructor of Salesmanager "<<endl;
    }

    void accept()
    {
        Employee::accept();
        acceptManager();
        acceptSalesman();
    }
    
    void display()
    {
        Employee::display();
        displayManager();
        displaySalesman();
    }
    ~SalesManager()
    {
        cout<<"Destructor of Salesmanager "<<endl;
    }
};

int main()
{
    int choice;
    int choice1;
    int index = 0;
    Employee *eptr[10];
    int count = 0;
    int managerCount = 0;
    int salesManCount = 0;
    int salesManagerCount = 0;

    do
    {
        cout<<"0: Exit "<<endl;
        cout<<"1: Accept Employee"<<endl;
        cout<<"2: Display the count of all employeess "<<endl;
        cout<<"3: Display all Managers"<<endl;
        cout<<"4: Display all Salesman"<<endl;
        cout<<"5: Display all Salesmanager"<<endl;
        cout<<"Enter Your choice "<<endl;
        cin>>choice;

        switch (choice)
        {
            case 0:
            cout<<"Thank You !!"<<endl;
            break;

            case 1:
            do
            {
                cout<<"1: Manager "<<endl;
                cout<<"2: Salesman"<<endl;
                cout<<"3: Salesmanager"<<endl;
                cout<<"Enter your choice :"<<endl;
                cin>>choice1;

                switch (choice1)
                {
                case 1: 
                    if (index < 10)
                    {
                        eptr[index] = new Manager();
                        eptr[index]->accept();
                        index++;
                        //count++;
                        //managerCount++;
                    }
                    else    
                        cout<<"Pointer is Full !!"<<endl;
                    break;
                
                case 2:
                    if (index < 10)
                    {
                        eptr[index] = new Salesman();
                        eptr[index]->accept();
                        index++;
                        //count++;
                        //salesManCount++;
                    }
                    else
                        cout<<"Pointer is Full !!"<<endl;

                case 3:
                    if(index<10)
                    {
                        eptr[index] = new SalesManager();
                        eptr[index]->accept();
                        index++;
                        //count++;
                        //salesManagerCount++;
                    }
                    else
                        cout<<"Pointer is Full !!"<<endl;
                default:
                    break;
                }
                    
            } while (choice1 != 0);
            case 2:

            
                cout<<"Count of all employees : "<<index<<endl;
                break;

            case 3:
                for(int i = 0;i<index;i++){
                    if (typeid(*eptr[i])== typeid(Manager))
                    {
                        managerCount++;
                    }
                }
                cout<<"Count of All Managers : "<<managerCount<<endl;
                break;

            case 4:
                for(int i = 0;i<index;i++){
                    if (typeid(*eptr[i])== typeid(Salesman))
                    {
                        salesManCount++;
                    }
                }
                cout<<"Count of All Salesman : "<<salesManCount<<endl;
                break;

            case 5:
                for(int i = 0;i<index;i++){
                    if (typeid(*eptr[i])== typeid(SalesManager))
                    {
                        salesManagerCount++;
                    }
                }
                cout<<"Count of all Salesmanagers : "<<salesManagerCount<<endl;
                break;

            default :
                cout<<"Invalid CHoice !!"<<endl;
            
        }
    } while (choice != 0);
    
    for(int i = 0;i<index;i++)
    {
        delete eptr[i];
        eptr[i] = NULL;
    }
    return 0;
}
