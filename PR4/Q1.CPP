#include<iostream>
#include<string.h>
using namespace std;
class message
 {
private:
    char message[100];

public:
    void set(const char* msg)
     {
        strcpy(this->message, message);
    }

    void print(const char* add) 
     {
        cout << "message: " <<message << endl << add << endl;
    }

    void get() {
        cout << "message: " <<message << endl;
    }
};

int main()
 {
    message m1, m2;
    m1.set("hello world");
    cout<< "print  the message is 1" << endl;
    m1.get();
    cout << endl;
    cout << "print the message is 2:" << endl;
    m2.set("how are you");
    m2.print("i am fine"); 
    cout << endl;
    return 0;
}
