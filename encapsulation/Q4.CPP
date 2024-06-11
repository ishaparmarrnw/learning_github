#include<iostream>
using namespace std;
class circle 
{
    double radius;
public:
     circle(double radius)
     {
        this->radius = radius;
    }
   double get() 
   {
        return 2 * 3.14 * radius;
    }
};
int main() 
{
   circle cir(4.1);
    cout <<  cir.get() << endl;
    return 0;
}


















