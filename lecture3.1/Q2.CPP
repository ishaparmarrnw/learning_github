#include <iostream>
#include <string.h>
using namespace std;
class Customer {

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
       Customer customers[5];
     for (int i = 0; i < 5;i++) 
     {
        customers[i].set(1, " parmar isha ", 21, "vapi", "1234567890", 2, "airtel");
        customers[i].set (2, "suthar rupesh", 25, "navsari", "9876543210", 1, "Jio");
       customers[i].set(3, "patel diya", 24, "rajkot", "2345678901", 3, "vi");
        customers[i].set(4, "halpati vidhi", 25, "surat", "3456789012", 1, "Jio");
        customers[i].set(5, "ahir diya ", 28, "vapi", "4567890123", 2, "airtel");
    }
    
    cout << "customer records:" << endl;
    for (int i=0; i<5;i++) 
    {
        customers[i].get();
    }

    return 0;
}