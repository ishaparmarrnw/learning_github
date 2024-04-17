#include <iostream>
#include <string.h>
using namespace std;
class shape
{
public:
    int width, height;
    shape(int width,int height) 
    {
        this->width=width;
        this->height=height;
    }
   void getwidth()
     {
        cout << "width: "<< width << endl;
    }
   void getheight() 
    {
        cout << "height: " << height << endl;
    }
};
class rectangle:public shape 
{
public:
    rectangle(int width,int height):shape(width,height){}
    void area()
     {
        cout << "area of rectangle is: " << width*height << endl;
    }
};

class triangle:public shape
{
public:
    triangle(int base, int height):shape(base, height){}

    void area()
     {
        cout << "area of triangle is: "<< (width*height)/2<< endl;
        
    }
};
int main() 
{
    rectangle rectangle(5,3);
    triangle triangle(2,5);

    rectangle.area();
    triangle.area();

    return 0;
}