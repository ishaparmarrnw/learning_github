#include <iostream>
using namespace std;

class Distance 
{ 

public:
    int feet;
    int inches;

    void set() 
    {
        cout << "enter feet: ";
        cin >> feet;
        cout << "enter inches: ";
        cin >> inches;
    }

    void get() 
    {
        cout << "distance is feet= " << feet <<endl
         << ",inches= " << inches << endl;
    }
};

int main() {
    Distance d1,d2 ;
    d1.set();
    d2.set();

    int feet = d1.feet + d2.feet;
    int inches=d1.inches+d2.inches;

    while(inches>=12)
    {
          feet++;
          inches=inches-12;
    }
    
    cout << "result  is: " << 
    feet << " feet " <<endl
    << inches << " inches." << endl;
    return 0;
}