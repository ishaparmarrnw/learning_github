#include <iostream>
#include <string.h>
using namespace std;
class diamondcompany
 {

    int comp_id;
    char comp_name[50];
    int comp_staff_quantity;
   int  comp_revenue;
    int comp_import_raw_diamonds;
    int comp_export_diamonds;
    char comp_ceo[50];
   
    public:
    void set(int id,const char*name,int staff_quantity,int revenue,int import_raw_diamonds, 
    int export_diamonds,const char* ceo)
     {
        comp_id = id;
        strcpy( comp_name, name);
        comp_staff_quantity = staff_quantity;
        comp_revenue =revenue;
        comp_import_raw_diamonds = import_raw_diamonds;
        comp_export_diamonds = export_diamonds;
        strcpy(comp_ceo,ceo);
    }
      void get()
       {
        cout << "company id: " << comp_id << endl
             << "company name: " << comp_name << endl
            << "staff quantity: " << comp_staff_quantity << endl
            << "annual revenue: " << comp_revenue << endl
            << "imported raw diamonds: " << comp_import_raw_diamonds << " per year" << endl
            << "exported diamonds: " << comp_export_diamonds << " per year" << endl
            << "ceo: " << comp_ceo << endl;
       
    }
};
int main()
{
    int n;
    cout << "enter the number of diamond companies: ";
    cin >> n;
     diamondcompany company[n];                                                              
    for (int i = 0; i<n; i++) 
    {
       int id;
      char name[50];
    int staff_quantity;
   int  revenue;
    int import_raw_diamonds;
    int export_diamonds;
    char ceo[50];
        cout << "enter details for company: " << i+1 << endl;
        cout << "company id: ";
        cin >> id;
        cout << "Company name: ";
        cin >> name;
        cout << "staff quantity: ";
        cin >> staff_quantity;
        cout << "annual revenue:";
        cin >> revenue;
        cout << "imported raw diamonds: ";
        cin >> import_raw_diamonds;
        cout << "exported diamonds: ";
        cin >> export_diamonds;
        cout << "ceo: ";
        cin >>ceo;

       company[i].set(id,name,staff_quantity,revenue,import_raw_diamonds,export_diamonds,ceo);
    }
    
    cout << "the  deatils of:" << endl;
    for (int i = 0; i < n; i++)
     {
        cout << "company:" << i+1 << endl;
        company[i].get();
    }

    return 0;
}

