#include <iostream>
using namespace std;
class p
 {
protected:
    float temperature; 
public:
   
    p(float temp):temperature(temp) {

    }
};
class q:public p 
{
public:
 
    q(float temp):p(temp) 
    {

    }
    float tofahrenheit() 
    {
        return (temperature * 9/5) + 32;
    }
};

class r: public q
{
public:
     r(float temp) : q(temp) 
     {

    }
   float tokelvin() 
   {
        float fahrenheit = tofahrenheit();
        return (fahrenheit + 459.67) * 5/9;
    }
};

int main()
 {
    float celsius;
    cout << "enter temperature in celsius: ";
    cin >> celsius;
    r temp(celsius);
    float fahrenheit = temp.tofahrenheit();
    cout << "temperature in fahrenheit: " << fahrenheit << "°F" << endl;
    float kelvin = temp.tokelvin();
    cout << "temperature in kelvin: " << kelvin << " K" << endl;
    return 0;
}