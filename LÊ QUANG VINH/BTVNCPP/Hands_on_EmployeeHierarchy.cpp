    #include <iostream>
    #include <limits>
    using namespace std;

    class Employee
    {
    protected:
        int id;
        string name;
        string role;
    public:
        Employee(const int &empld, const string& empName, const string& empRole)
        : id(empld), name(empName), role(empRole) {}
        virtual void setData() 
        {
            cout << "Enter ID: ";
            cin >> id;
            cout << "Enter name employee: ";
            cin.ignore(numeric_limits <streamsize>::max(), '\n');
            getline(cin, name);
            cout << "Enter role of employee: ";
            cin >> role; 
        }
        virtual void displayDetails()
        {
            cout << "Employee ID: " << id << endl;
            cout << "Employee Name: " << name << endl;
            cout << "Employee Role: " << role << endl;
        }
    };
    class Manager : public Employee
    {
    protected:
        string department;
    public:
        Manager() : Employee(0, "", ""), department(""){}
        void setData() override
        {
            Employee::setData();
            cin.ignore(numeric_limits <streamsize>::max(), '\n');
            cout << "Enter department managed by the manager: ";
            getline(cin, department);
        }
        void displayDetails() override
        {
            Employee::displayDetails();
            cout << "Department managed: " << department << endl;
        }
    };
    class Director : public Manager
    {
    protected: 
        int reportees;
    public:
        Director() : Manager(), reportees(0) {}
        void setData() override
        {
            Manager::setData();
            cout << "Enter number of reportees: ";
            cin >> reportees;
            cin.ignore(numeric_limits <streamsize>::max(), '\n');
        }
        void displayDetails() override
        {
            Manager::displayDetails();
            cout << "Reportees: " << reportees << endl;
        }
    };
    int main()
    {   
        Employee *emp = new Employee(0, "", "");
        Manager *mg = new Manager();
        Director *dr = new Director();
        cout << "---Employee---\n";
        emp->setData();
        emp->displayDetails();
        cout << "---Manager---" << endl;
        mg->setData();
        mg->displayDetails();
        cout << "---Director---\n";
        dr->setData();
        dr->displayDetails();
        delete emp;
        delete mg;
        delete dr;
        return 0;
    }