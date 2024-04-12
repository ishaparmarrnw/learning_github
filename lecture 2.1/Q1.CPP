#include <iostream>
#include <string.h>
using namespace std;
class Employee 
{
    int emp_id;
    char emp_name[50];
    int emp_age;
    char emp_role[30];
    int emp_salary;
    char emp_city[40];
    int emp_experience;
    char emp_company_name[30];

public:
  void set(int id,const char* name,int age,const char* role,int salary,const char* city,int experience,const char* company_name) 
  {
        emp_id = id;
        strcpy(emp_name, name);
        emp_age = age;
        strcpy(emp_role, role);
        emp_salary = salary;
        strcpy(emp_city, city);
        emp_experience = experience;
        strcpy(emp_company_name, company_name);
    }
    void get() 
    {
        cout << "employee id:" << emp_id << endl;
        cout << "employee name:" << emp_name << endl;
        cout << "employee age:" << emp_age << endl;
        cout << "employee role:" << emp_role << endl;
        cout << "employee salary:" << emp_salary << endl;
        cout << "employee city:"<< emp_city << endl;
        cout << "employee experience:" << emp_experience << endl;
        cout << "employee company Name:" << emp_company_name << endl;
     
    }
};
int main() 
{
     Employee emp1,emp2,emp3,emp4,emp5;
    emp1.set(1,"isha",25,"ca",60000,"surat",5,"suraj corp");
    emp2.set(2,"anju",26,"sales",80000,"navsari",8,"sejal inc");
    emp3.set(3,"vidhi",28,"HR ",55000,"vapi", 4,"pv company");
    emp4.set(4,"diya",24,"Developer",75000,"valsad",10,"rajvi ltd");
    emp5.set(5,"sakshi",28,"Manager",70000,"",6,"rdv enterprises");
    
    emp1.get();
    emp2.get();
    emp3.get();
    emp4.get();
    emp5.get();

    return 0;
}