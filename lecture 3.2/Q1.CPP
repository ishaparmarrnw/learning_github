#include <iostream>
#include <cstring>
using namespace std;
class hotel
 {
private:
    int hotel_id;
    char hotel_name[50];
    char hotel_type[20];
    char hotel_rating[10];
    char hotel_location[50];
    int hotel_establish_year;
    int hotel_staff_quantity;
    int hotel_room_quantity;

public:
   
    void set (int hotel_id ,const char* hotel_name,const char*hotel_type,const char* hotel_rating,const char* hotel_location,
          int hotel_establish_year,int hotel_staff_quantity,int hotel_room_quantity) 
          {
         this->hotel_id=hotel_id;
        strcpy(this->hotel_name,hotel_name);
        strcpy(this->hotel_type,hotel_type);
        strcpy(this->hotel_rating,hotel_rating);
        strcpy(this->hotel_location,hotel_location);
         this->hotel_establish_year=hotel_establish_year;
        this->hotel_staff_quantity=hotel_staff_quantity;
        this->hotel_room_quantity=hotel_room_quantity;
    }

  
    void get() 
    {
        cout << "hotel id: " << hotel_id << endl
             << "hotel name: " << hotel_name << endl
             << "hotel type: " << hotel_type << endl
             << "hotel rating: " << hotel_rating << endl
             << "hotel Location: " << hotel_location << endl
            << "establishment year: " << hotel_establish_year << endl
            << "number of staff: " << hotel_staff_quantity << endl
            << "number of rooms: " << hotel_room_quantity << endl;
            
    }
};
int main() 
{
    hotel  h1,h2,h3;
        h1.set(101, " A", "Hotel", "5 star", "vapi", 1990, 50, 30);
        h2.set(102, "B", "Hotel", "4 star", "surat", 1985, 40, 75);
        h3.set(103, "C", "Motel", "3 star", "navsari", 2000, 20, 40);
        h1.get();
        h2.get();
        h3.get();

    return 0;
}