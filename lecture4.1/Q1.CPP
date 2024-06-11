#include <iostream>
using namespace std;
class x 
{
    public:
    int a, b, c;
    void setData(int a, int b, int c) 
    {
       this-> a = a;
        this-> b = b;
        this->c = c;
    }
};
class y :public x 
{
    public:
    int sumcube()
    {
        return (a*a*a)+(b*b*b)+(c*c*c);
    }
    void getData() 
    {
        cout << "values of  is: " << a << ", " << b << ", " << c << endl;
    }
};
int main() 
{
    y y1;
    int a, b, c;
    cout << "enter three number: ";
    cin >> a >> b >> c;
    y1.setData(a,b,c);
    y1.getData();
    cout << "sum of cubes of the numbers: " << y1.sumcube() << endl;
     return 0;
}