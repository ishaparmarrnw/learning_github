#include <iostream>
#include <string.h>
using namespace std;
class fastfoodcafe 
{
    int cafe_id;  
    char cafe_name[100];
    char cafe_type[50];
    char cafe_rating[20];
    char cafe_location[50];
    int cafe_establish_year;
    int cafe_staff_quantity;

   public:
          void set(int id,const char*cafe_name,const char* cafe_type, const char* cafe_rating,const char* cafe_location, 
          int cafe_establish_year,int cafe_staff_quantity) 
    {    
        this-> cafe_id = id;
        strcpy(this-> cafe_name,  cafe_name);
        strcpy(this-> cafe_type,  cafe_type);
        strcpy(this-> cafe_rating,  cafe_rating);
        strcpy(this-> cafe_location,  cafe_location);
        this-> cafe_establish_year =  cafe_establish_year;
        this-> cafe_staff_quantity =  cafe_staff_quantity;
    }

    
    void get()
     {
        cout << "cafe id: " << cafe_id << endl
             << "cafe name: " << cafe_name << endl
             << "cafe type: " << cafe_type << endl
             << "cafe rating: " << cafe_rating << endl
            << "cafe location: " << cafe_location << endl
            << "establishment year: " << cafe_establish_year << endl
             << "staff quantity: " << cafe_staff_quantity << endl
             << endl;
    }
};

int main()
{
    int n;
    cout << "enter the number of fast food cafes: ";
    cin >> n;

    fastfoodcafe cafes[n];
    for (int i=0;i<n;i++) 
    {
          int cafe_id;  
      char cafe_name[100];
      char cafe_type[50];
       char cafe_rating[20];
      char cafe_location[50];
      int cafe_establish_year;
      int cafe_staff_quantity;

        cout << "enter details for cafe " << i+1 << ":" << endl;
        cout << "cafe id: ";
        cin >> cafe_id;
        cout << "cafe name: ";
        cin >> cafe_name;
        cout << "cafe type: ";
        cin >>cafe_type;
        cout << "cafe rating: ";
        cin >> cafe_rating;
        cout << "cafe location: ";
        cin >> cafe_location;
        cout << "establishment year: ";
        cin >> cafe_establish_year;
        cout << "staff quantity: ";
        cin >> cafe_staff_quantity;
        cafes[i].set(cafe_id,cafe_name, cafe_type, cafe_rating, cafe_location, cafe_establish_year, cafe_staff_quantity);
    }

    cout << "fast food cafe information:" << endl;
    for (int i = 0; i < n; i++) 
    {
        cout << "cafe " << i+1 << ":" << endl;
        cafes[i].get();
    }

    return 0;
}