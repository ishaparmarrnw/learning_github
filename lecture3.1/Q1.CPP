#include <iostream>
#include <string.h>
using namespace std;
class student
 {

    int stu_id;
    char stu_name[50];
    int stu_age;
    char stu_course[30];
    char stu_city[30];
    char stu_email[40];
   char stu_college[50];

public:
   void set(int id, const char* name, int age, const char* course, const char* city, const char* email, const char* college)
    {
        stu_id = id;
        strcpy(stu_name, name);
        stu_age = age;
        strcpy(stu_course, course);
        strcpy(stu_city, city);
        strcpy(stu_email, email);
        strcpy(stu_college, college);
    }

    void get()
     {
        cout << "student id: " << stu_id << endl;
        cout << "student name: " << stu_name << endl;
        cout << "student age: " << stu_age << endl;
        cout << "student course: " << stu_course << endl;
        cout << "student city: " << stu_city << endl;
        cout << "student email: " << stu_email << endl;
        cout << "student college: " << stu_college << endl
        << "-------------------------next---------------" << endl;
    }
};

int main()
 {
    student students[5];
    
     int stu_id;
    char stu_name[50];
    int stu_age;
    char stu_course[30];
    char stu_city[30];
    char stu_email[40];
   char stu_college[50];
   
    for (int i=0;i<5;i++) 
    {
      cout << "enter student id: ";
      cin >> stu_id;
      cout << "enter student name: ";
      cin >> stu_name;
      cout << "enter student age:";
      cin >> stu_age;
      cout << "enter student course: ";
      cin >> stu_course;
      cout << "enter student city: ";
      cin >> stu_city;
      cout <<"enter student email ";
      cin >> stu_email;
      cout<< "enter student college ";
      cin >> stu_college;
     students[i].set(stu_id,stu_name,stu_age,stu_course,stu_city,stu_email,stu_college);
}
    cout << "students details :" << endl;
    for (int i=0;i<5;i++)
    {
        students[i].get();
    }
    return 0;
}