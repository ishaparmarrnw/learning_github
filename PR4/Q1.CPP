#include<iostream>
#include<string.h>
using namespace std;
class Message
 {
private:
    string message;

public:
    Message(string message = "string"){
         this->message = message ;
    }

    void print() 
     {
        cout << "message: " <<message << endl;
    }

    void print(const char* add) 
     {
        this->message = this->message + " "  + add ;
        cout << "message: " << message  << endl;
    }
};

int main()
 {
    Message  m1,m2("how are you");
    cout<< "print  the message is 1" << endl;
    m1.print();
    cout << "print the message is 2:" << endl;
    m2.print("i am fine");
    cout << endl;
    return 0;
}
