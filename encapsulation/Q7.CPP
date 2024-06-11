#include <iostream>
using namespace std;
class temperature
 {
    double celsius;
public:
     void setcelsius(double tempcelsius) 
    {
        if (tempcelsius < -273.15)
         {
            cout << "temperature cannot be below absolute zero (-273.15°C)." << endl;
        } 
        else
         {
            celsius = tempcelsius;
         }
    }
    double getcelsius() 
     {
        return celsius;
    }
    double fahrenheit() const 
    {
        return (celsius*9/5) + 32;
    }
};

int main() 
{
   temperature temp;
   double celsius;
    cout << "enter temperature in Celsius: ";
    cin >> celsius;
    temp.setcelsius(celsius);
    cout << "temperature celsius: " << temp.getcelsius()  << endl;
    cout << "temperature fahrenheit: " << temp.fahrenheit()  << endl;
}