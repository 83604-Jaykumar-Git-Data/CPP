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

    void setBonus(double bonus)
    {
        this->bonus = bonus;
    }

    double getBonus()
    {
        return bonus;
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

    void setCommission(double commission)
    {
        this->commission = commission;
    }

    double getCommission()
    {
        return commission;
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
    
    Employee *eptr = new SalesManager();
    eptr->accept();
    eptr->display();

    delete eptr;
    eptr = NULL;
    
    return 0;
}
