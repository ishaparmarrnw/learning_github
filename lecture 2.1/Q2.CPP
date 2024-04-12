#include <iostream>
#include <string.h>
using namespace std;
class Car 
{
    int car_id;
    char car_company_name[50];
    char car_color[20];
    char car_model[50];
    int car_release_year;

public:
   void set(int id,char company_name[],char color[],char model[],int release_year) 
    {
        car_id = id;
        strcpy(car_company_name, company_name);
        strcpy(car_color, color);
        strcpy(car_model, model);
        car_release_year = release_year;
    }
    void get() 
    {
        cout << "car id:" << car_id << endl;
        cout << "car company name:" << car_company_name << endl;
        cout << "car color:" << car_color << endl;
        cout << "car model:" <<car_model << endl;
        cout << "car release Year:" << car_release_year << endl;
    }
};
int main() {
    Car car1,car2,car3,car4;
    car1.set(1,"toyota","red","camry",2021);
    car2.set(2,"honda","blue","civic",2020);
    car3.set(3,"ford","black","mustang",2019);
    car4.set(4,"chevrolet","white","corvette",2022);

    car1.get();
    car2.get();
    car3.get();
    car4.get();

    return 0;
}