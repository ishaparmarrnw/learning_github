#include <iostream>
#include <string.h> 
using namespace std;
class bankaccount
 {
    int accountnumber;
    int balance;
    char ownername[50];
public:
   void set(int accnum, int bal, const char* owner)
       {
        accountnumber = accnum;
        balance = bal;
        strcpy(ownername, owner);
    }
    void get() 
    {
        cout << "customer number: " << accountnumber << endl;
        cout << "customer balance: " << balance << endl;
        cout << "owner name: " << ownername << endl;
    }
    void deposit(int amount)
     {
        if (amount > 0) 
        {
            balance += amount;
            cout << "deposited: " << amount << ", new balance: " << balance << endl;
        } 
        else 
        {
            cout << "invalid deposit amount" << endl;
        }
    }
    void withdraw(int amount) 
    {
        if (amount>0 && amount<=balance) 
        {
            balance -= amount;
            cout << "withdraw: " << amount << ", new balance: " << balance << endl;
        } 
        else if (amount > balance)
         {
            cout << "insufficient funds" << endl;
        } else
         {
            cout << "invalid withdrawal amount" << endl;
        }
    }
};

int main() 
{
   bankaccount myaccount;
    myaccount.set(1233456789,2000,"isha");
    myaccount.get();
    myaccount.deposit(500);
    myaccount.withdraw(200);
    myaccount.withdraw(2000);

    return 0;
}