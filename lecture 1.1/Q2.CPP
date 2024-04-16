#include<iostream>
using namespace std;
int main()
 {
    int first, second;
    cout << "Enter the first year: ";
    cin >> first;
    cout << "Enter the second year: ";
    cin >> second;

    cout << "leap year:";
    for (int i=first;i<=second; i++) {
        if ((i % 4==0 && i % 100 != 0)||(i%400== 0)) 
        {
            cout << i<< endl;
        }
    }

    return 0;
}