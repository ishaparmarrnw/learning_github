#include<iostream>
#include<string.h>
using namespace std;
class employee 
{
  int id;
  char  name[100];
  char position[50];
  int  salary;
    public:
      void set (int id ,const char *name ,const char*position,int salary)
      {
        this->id =id;
        strcpy(this->name,name);
        strcpy(this->position,position);
        this->salary=salary;

      }
    int getid()
       {
        return id;
    }
    const  char* getname() 
    {
        return name;
    }

  const char* getposition()
   {
        return position;
    }

   int getsalary() 
   {
        return salary;
    }
    void giveraise(double percentage)
     {
        salary += (salary * (percentage / 100));
    }

      void displayemployeeinfo()
      {
        cout <<"employee id: "<< id<<endl
             <<"employee name: " <<name <<endl
             <<"employee position: " << position <<endl
             <<"employee salary: " << salary <<endl;

      }
};
int main()
 {
    employee emp1,emp2,emp3;
    emp1.set(1, "patel ajay", "Software Engineer", 50000);
     emp2.set(2, "parmar isha", "Data Science", 60000);
   emp3.set(3, "suthar rupesh", "computer Engineer", 70000);

   
    cout << "Initial Employee Information:" << endl;
    emp1.displayemployeeinfo();
    emp2.displayemployeeinfo();
    emp3.displayemployeeinfo();

 
    emp1.giveraise(10);
    emp2.giveraise(15);
    emp3.giveraise(20);

    cout << "Updated Employee Information after Raises:" << endl;
    emp1.displayemployeeinfo();
    emp2.displayemployeeinfo();
    emp3.displayemployeeinfo();

    return 0;
}
