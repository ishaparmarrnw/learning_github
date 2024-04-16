#include<iostream>
using namespace std;
int main()
{
    int size;
    cout << "enter the  array of size";
    cin >> size;
    int arr[size];
  cout << "enter the elements of the array:" << endl;
    for(int i=0;i<size;i++)
    {
        cout << "enter the elements of index " << i<< ": ";
        cin >> arr[i];

    }
     cout << "even numbers in the array:" << endl;
    for( int i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
            cout <<"the even number" << arr[i] << endl;
        }
    }
    return 0;
}




