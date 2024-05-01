#include<iostream>
#include <string.h>
#include <typeinfo>
using namespace std;
class age
{
    char solution[100] = "eligible to vote";
    public:
    void checkeligible(int age)
    {
        try
        {
            if(age > 18){
                throw solution;
            }else{
               throw age; 
            }
        }
        catch(char solution[])
        {
            cout << solution << endl;
        }
        catch(...){
             cout << "Not eligible to vote";
        }
    }
};

int main()
{
    age p1;
     int age;
    cout << "enter your age: ";
    cin >> age;
    p1.checkeligible(age);
    return 0;
}
