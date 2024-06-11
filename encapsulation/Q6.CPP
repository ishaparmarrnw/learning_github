#include<iostream>
#include<string.h>
using namespace std;
class student 
{
   char name[50];
   int age;
   char grade[5];
   public:
     void set(const char*name,int age,const char*grade)
     {
        strcpy(this->name,name);
        this->age=age;
        strcpy(this->grade,grade);

     }
    const char* getname()
     {
        return name;
      }
  int getage()
   {
        return age;
    }
  const char* getgrade() 
  {
        return grade;
    }
    void displayinfo() 
     {
        cout << "name: " << name << endl;
        cout << "age: " << age << endl;
        cout << "grade: " << grade << endl;
    }
};

int main() {

    student students[3];
    char name[50];
    int age;
    char grade[5];
    for (int i=0;i<3;i++) 
    {
        cout << "enter student name: " ;
        cin >> name; 
        cout << "enter student age: " ;
        cin >> age;
        cout << "enter grade for student: " ;
       cin >> grade;
        students[i].set(name, age, grade);
    }


    for (int i = 0; i < 3; ++i)
     {
        cout << "student  information: "  << endl;
        students[i].displayinfo();
    }

    return 0;
}