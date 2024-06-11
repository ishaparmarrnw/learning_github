#include<iostream>
#include<string.h>
using namespace std;

class engine {
    int horsepower;
public:
    void setHorsepower(int horsepower) {
        this->horsepower = horsepower;
    }
    int getHorsepower() {
        return horsepower;
    }
};

class car {
    char make[50];
    char model[50];
    engine eng;
public:
    void set(const char* make, const char* model) {
        strcpy(this->make, make);
        strcpy(this->model, model);
    }

    const char* getMake() {
        return make;
    }
    
    const char* getModel() {
        return model;
    }

    void setHorsepower(int hp) {
        eng.setHorsepower(hp);
    }

    int getHorsepower() {
        return eng.getHorsepower();
    }

    void displayinfo() {
        cout << "make: " << make << endl
             << "model: " << model << endl
             << "horsepower: " << eng.getHorsepower() << endl;
    }
};

int main() {
    car mycar;
    mycar.set("Toyota", "Corolla");
    mycar.setHorsepower(120);
    mycar.displayinfo();
    return 0;
}