#include<iostream>
#include<string.h>
using namespace std;
class  supermarketbilling
{
     int verified=0;
     int user_id=1234;
     char pass[50]="abc@123";
   int item_number;
   char  item_name[50];
   int  quantity;
   int  price;
  int  discount;
  public:
     void verification(int id,const char*password)
     {

       if(user_id==id && strcmp(pass,password)==0)
       {
        verified = 1;
         cout << "user verified" << endl;
       }
       else{
         cout << "not verified "<< endl;
       }
     }
    void set(int item_number,const char*item_name,int quantity,int price,int discount)
    {
        if(verified==0)
        {
            cout<<"user not verifird" << endl;
            return ;
        }
        this->item_number = item_number;
        strcpy(this-> item_name,item_name);
        this->quantity=quantity;
        this->price=price;
        this->discount=discount;
    }
    void get()
    {
        cout << "enter the item number: " << item_number << endl
             << "enter the item name: "  << item_name <<endl
             << "enter the quantity: " << quantity << endl
             << " the price is : " << price << endl
             <<" the discount is: " << discount << endl;
    }
   
};

int main()
{
    supermarketbilling supermarket;
    int id;
    char password[50];
    
    cout << "enter User id: ";
    cin >> id;
    cout << "enter password: ";
    cin >> password;
  supermarket.verification(id, password);
    int item_number;
   char  item_name[50];
   int  quantity;
   int  price;
    int  discount;
    cout << "enter item details:" << endl;
   cout << "number: ";
    cin >>item_number;
    cout << "name: ";
   cin >> item_name;
    cout << "quantity: ";
    cin >> quantity;
    cout << "price: ";
    cin >> price;
    cout << "discount: ";
    cin >> discount;
    supermarket.set(item_number, item_name, quantity, price, discount);

 }