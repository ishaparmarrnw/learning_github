#include <iostream>
using namespace std;
class rectangle 
{
    int width;
    int height;
public:
     void set(int w, int h) 
     {
        width = w;
        height = h;
    }
    int get() 
    {
        return width * height;
    }
};
int main() 
{
    rectangle rect;
    int width, height;
   
    cout << "enter the width rectangle: ";
    cin >> width;
    cout << "enter the height  rectangle: ";
    cin >> height;
    rect.set(width, height);
    cout << "The area of the rectangle is: " << rect.get() << endl;

    return 0;
}