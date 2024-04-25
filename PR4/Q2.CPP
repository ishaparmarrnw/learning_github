#include <iostream>
using namespace std;
class Distance 
{
private:
   int km; 
  int meter;
public:
  void set(int km, int meter)
   {
        this->km = km;
        this->meter = meter;
    }
    
     Distance operator +( Distance d)
      {
        Distance result;
        result.km=km+d.km;
        result.meter=meter+d.meter;
     
     if(result.meter>=1000)
     {
        result.km+=result.meter/1000;
        result.meter%=1000;
     }
      return  result ;
     }

   void get()
    {
        cout << "km: " << km <<endl
             << "meter: " << meter << endl;
    }

};
int main() {
    Distance d1, d2, d3;
    d1.set(4, 4500);
    d2.set(6, 3000);
    d3 = d1+d2;

    d3.get();

    return 0;
}
