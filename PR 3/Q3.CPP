#include <iostream>
using namespace std;
class person 
{
public: 
    char name[50];
    int age;

    void getdata() 
    {
        cout << "enter name: ";
       cin >> name;
        cout << "enter age: ";
        cin >> age;
    }
};
class employee:public person 
{
public:
    int empid;
    float salary;
    void getempdata() 
    {
        cout << "enter employee id: ";
        cin >> empid;
        cout << "enter salary: ";
        cin >> salary;
    }
};
class manager:public employee 
{
public: 
    char department[50];
    void getmanagerdata()
     {
        cout << "enter department: ";
       cin >> department;
    }
    void get()
     {
        cout << "name: " << name << endl
             << "age: " << age << endl
             << "employee id: " << empid << endl
             << "salary: " << salary << endl
             << "department: " << department << endl;
    }
};
int main()
 {
    manager manager;
    manager.getdata();
    manager.getempdata();
    manager.getmanagerdata();
    cout << endl;
    manager.get();
    return 0;
}
