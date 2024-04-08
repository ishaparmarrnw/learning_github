#include <iostream>
using namespace std;
int main() 
{

    int seconds;
    cout << "enter seconds: ";
    cin >> seconds;

    int hours = seconds/3600;
    int minutes = (seconds%3600)/60;
    int rseconds = seconds%60;

     cout << "output: " << hours << ":"
        << minutes << ":"  
        << rseconds << endl;

    return 0;
}