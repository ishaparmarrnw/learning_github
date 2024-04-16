#include <iostream>
#include <string.h>
using namespace std;
class customer
 {

    int cust_id;
    char cust_name[50];
    int cust_age;
    char cust_city[30];
    char cust_mobile_number[30];
    int cust_simcard_validity;
    char cust_telecom_brand_name[20];

      public:
      void set(int cust_id, const char* cust_name, int cust_age, const char* cust_city, const char* cust_mobile_number, 
      int cust_simcard_validity, const char* telecom_brand_name) {
        this-> cust_id = cust_id;
        strcpy(this-> cust_name, cust_name);
        this-> cust_age =  cust_age;
        strcpy(this-> cust_city,  cust_city);
        strcpy(this-> cust_mobile_number,  cust_mobile_number);
         this-> cust_simcard_validity =  cust_simcard_validity;
        strcpy(this-> cust_telecom_brand_name, telecom_brand_name);
    }
   

    void get () {
        cout << "customer id: " << cust_id << endl;
        cout << "name: " << cust_name << endl;
        cout << "age: " << cust_age << endl;
        cout << "city: " << cust_city << endl;
        cout << "mobile number: " << cust_mobile_number << endl;
        cout << "sim card validity: " << cust_simcard_validity << " years" << endl;
        cout << "telecom brand name: " << cust_telecom_brand_name << endl;
        cout << endl;
    }
};

int main()
 {
       customer customers[5];
    int cust_id;
    char cust_name[50];
    int cust_age;
    char cust_city[30];
    char cust_mobile_number[30];
    int cust_simcard_validity;
    char cust_telecom_brand_name[20];
     for (int i = 0; i < 5;i++) 
     {
       cout << "enter the customer id; ";
       cin >> cust_id;
       cout << "enter the customer name: ";
       cin >> cust_name;
       cout <<"enter the customer age: " ;
       cin >> cust_age;
       cout <<  "enter the city name: ";
       cin >> cust_city;
       cout << "enter the mobile number:";
       cin >> cust_mobile_number;
       cout << "enter the simcard validaity: ";
       cin >> cust_simcard_validity;
       cout << "enter the telecom brand name: ";
       cin >> cust_telecom_brand_name;
       customers[i].set(cust_id,cust_name,cust_age,cust_city,cust_mobile_number,cust_simcard_validity,cust_telecom_brand_name);
    }
    
    cout << "customer records:" << endl;
    for (int i=0;i<5;i++) 
    {
        customers[i].get();
    }

    return 0;
}