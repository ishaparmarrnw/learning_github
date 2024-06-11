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
    rect.set(5,3);
    cout <<  rect.get() << endl;
     return 0;
}