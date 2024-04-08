#include <iostream>
using namespace std;

class Distance {
private:
    int feet;
    int inches;

public:
    void set() {
        cout << "enter feet: ";
        cin >> feet;
        cout << "enter inches: ";
        cin >> inches;
    }

    void get() {
        cout << "distance is feet= " << feet <<endl
         << ",inches= " << inches << endl;
    }

    void add(Distance d1, Distance d2) {
        feet = d1.feet + d2.feet;
        inches = d1.inches + d2.inches;
        feet += inches / 12;
        inches %= 12;
    }

    int getfeet() {
        return feet;
    }

    int getinches() {
        return inches;
    }
};

int main() {
    Distance d1,d2,d3;
    d1.set();
    d2.set();
    d3.add(d1,d2);
    cout << "result  is: " << d3.getfeet() << " feet " <<endl
    << d3.getinches() << " inches." << endl;
    return 0;
}