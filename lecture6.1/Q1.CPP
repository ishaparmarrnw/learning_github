#include<iostream>
#include<string.h>
using namespace std;
class admin
{
   public:
   char company_name[100];
    int  manager_salary;
    int  employee_salary;
    int total_staff;
   int total_annual_revenue;
   bool can_terminate;

   void set(const char *company_name,int manager_salary,int employee_salary,int total_staff,
   int total_annual_revenue ,bool can_terminate )
   {
      strcpy(this->company_name,company_name);
      this->manager_salary=manager_salary;
      this->employee_salary=employee_salary;
      this->total_staff=total_staff;
      this->total_annual_revenue=total_annual_revenue;
      this->can_terminate=can_terminate;
   }

     virtual  void  access()
     {
        cout << "company name: " << company_name << endl
        << "manager salary: " << manager_salary << endl
         << "employee salary: " << employee_salary << endl
        << "total staff: " << total_staff << endl
       << "total annual revenue: " << total_annual_revenue << endl
       <<"can terminate: " << (can_terminate ? "yes" : "no") << endl;
    }
   
};

class manager : public admin
{
public:
    void access() override
    {
        cout << "manager access: " << endl;
        admin::access();
    }
};

class employee : public admin
{
public:
    void access() override
    {
        cout << "employee access: " << endl;
        admin::access();
    }
};
int main()
{
 manager manag;
    employee emp;
     char company_name[100];
    int  manager_salary;
    int  employee_salary;
    int total_staff;
   int total_annual_revenue;
   bool can_terminate;
   
    cout << "enter details for manager:" << endl;
    cout << "company name: ";
    cin >> company_name;
    cout << "manager salary: ";
    cin >> manager_salary;
    cout << "employee salary: ";
    cin >> employee_salary;
    cout << "total staff: ";
    cin >>total_staff;
    cout << "total annual revenue: ";
    cin >> total_annual_revenue;
    cout << "can terminate: ";
    cin >> can_terminate;
   manag.set(company_name,manager_salary,employee_salary,total_staff,total_annual_revenue,can_terminate);

    cout << "\nenter details for employee:" << endl;
    cout << "company name: ";
    cin >>company_name;
    cout << "manager salary: ";
    cin >>manager_salary;
    cout << "employee salary: ";
    cin >>employee_salary;
    cout << "total staff: ";
    cin >> total_staff;
    cout << "total annual revenue: ";
    cin >> total_annual_revenue;
    cout << "can terminate: ";
    cin >> can_terminate;
    emp.set(company_name,manager_salary,employee_salary,total_staff,total_annual_revenue,can_terminate);
}

