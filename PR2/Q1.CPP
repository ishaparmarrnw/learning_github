#include<iostream>
#include<string.h>
using namespace std;

class reservationsystem
{
    int number;
    char name[50];
    char source[40];
    char destination[30];
    int time;

public:
    void set(int number, const char *name, const char* source, const char* destination, int time)
    {
        this->number = number;
        strcpy(this->name, name);
        strcpy(this->source, source);
        strcpy(this->destination, destination);
        this->time = time;
    }

    void get()
    {
        cout << "number: " << number << endl
             << "name: " << name << endl
             << "source: " << source << endl
             << "destination: " << destination << endl
             << "time: " << time << endl;
    }

   static void searchbynumber(reservationsystem train[], int size, int number)
    {
        for(int i = 0; i < size; i++)
        {
            if(train[i].number == number)
            {
                train[i].get();
                return;
            }
        }
      
        cout << "train with number " << number << " not found!" << endl;
    }
};

int main()
{
    reservationsystem train[3];
    int number;
    char name[50];
    char source[40];
    char destination[30];
    int time;

    for(int i=0;i<3;i++)
    {
        cout << "enter train number: ";
        cin >> number;
        cout << "enter train name: ";
        cin >> name;
        cout << "enter train source: ";
        cin >> source;
        cout << "enter train destination: ";
        cin >> destination;
        cout << "enter train time: ";
        cin >> time;
        train[i].set(number, name, source, destination, time);
    }

    for(int i=0;i<3; i++)
    {
        train[i].get();
    }
    reservationsystem::searchbynumber(train, 3, 123);

    return 0;
}