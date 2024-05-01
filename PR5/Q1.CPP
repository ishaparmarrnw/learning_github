#include<iostream>
using namespace std;
class number
{
public:
    int dividenumber( int num1,int num2)
    {
        try
        {
            if(num2==0)
            {
                throw ;
                cout << "divsion not zero ";
            }
            cout << "result is: " << num1/num2 << endl;
        }
        catch(...)
        {
            cout << "division by zero" << endl;
        }
    }
};

int main()
{
    number n1;
    int num1, num2;
    cout <<"enter first number: ";
    cin >> num1;
    cout << "enter second number: ";
    cin >> num2;
    n1.dividenumber(num1,num2);
    return 0;
}