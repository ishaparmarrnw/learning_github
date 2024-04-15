#include <iostream>
#include <string.h>
using namespace std;
class Student
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
        cout << "student college: " << stu_college << endl;
    }
};

int main()
 {
    Student students[5];

    for (int i =0;i<5;i++) 
    {
        students[i].set(101,"isha",20,"bca","navsari","isha@123","sp");
        students[i].set(102,"anju",21,"bsc","surat","isha@123","cbp");
        students[i].set(103,"suraj",22,"bba","vapi","isha@123","ms");
        students[i].set(104,"rajvi",19,"bcom","valsad","isha@123","prime");
        students[i].set(105,"raj",20,"bca","rajkt","isha@123","ab");

    } 
    
    cout << "students details :" << endl;
    for (int i=0; i<5;i++)
     {
        students[i].get();
    }
    return 0;
}