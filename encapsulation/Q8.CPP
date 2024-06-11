#include <iostream>
#include <string.h>
using namespace std;
class book 
{
    char title[100];
    char author[50];
    int  price;
    char isbn[20];
public:
       void set(const char* title, const char* author, int  price, const char* isbn) 
    {
        strcpy(this->title, title);
        strcpy(this->author, author);
        this->price = price;
        strcpy(this->isbn, isbn);
    }
   const char* gettitle()
    {
        return title;
    }
    const char* getauthor()
     {
        return author;
    }
   int getprice()
    {
        return price;
    }
    const char* getisbn() 
     {
        return isbn;
    }
    void displaydetails() 
    {
        cout << "title: " << title << endl;
        cout << "author: " << author << endl;
        cout << "price: " << price << endl;
        cout << "isbn: " << isbn << endl;
    }
};

int main() 
{
    book book1,book2,book3;
    book1.set("computer networkes", "anju suthar", 250, "9780743273565");
    cout << "book 1 detail:" << endl;
    book1.displaydetails();

    book2.set("introduction of computer", "sakshi patel", 300, "9780061120084");
    cout << "book 2 details:" << endl;
    book2.displaydetails();

    book3.set("programmming skills ", "sager desai", 8.99, "9780451524935");
    cout << "book 3 details:" << endl;
    book3.displaydetails();
 
   return 0;
}