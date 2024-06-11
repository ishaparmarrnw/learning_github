#include <iostream>
using namespace std;

class rectangle {
    int width;
    int height;

public:
   
    void setwidth(int w) 
    {
        if (w >0)
            width = w;
        else
            width = 1;
    }
    void setheight(int h) 
    {
        if (h > 0)
            height = h;
        else
            height = 1;
    }
    int getwidth()
     {
        return width;
    }
    int getheight() 
    {
        return height;
    }
};

int main() {
    rectangle rect;
    rect.setwidth(5);
    rect.setheight(-4);
    cout <<"width: " << rect.getwidth() <<endl
          <<"height: "<< rect.getheight() << endl;
          return 0;
}