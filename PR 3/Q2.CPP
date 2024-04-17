#include <iostream>
using namespace std;
class number 
{
public:
    int num;
    void set(int n) 
    {
        num = n;
    }
    int get() 
    {
        return num;
    }
};

class square:public number
 {
public:
    int square;
    void getsquare()
    {
       square=num*num;
    }
};

class cube:public number
 {
public:
    int cube;
    void getcube() 
    {
        cube=num*num*num;
    }
};

int main() 
{
    int number;
    cout << "enter  integer number: ";
    cin >> number;
    square objs;
    cube objc;
    objs.set(number);
    objc.set(number);
   objs.getsquare();
    objc.getcube();
    cout << "square is: " << objs.square << endl;
    cout << "cube is: " << objc.cube << endl;

    return 0;
}