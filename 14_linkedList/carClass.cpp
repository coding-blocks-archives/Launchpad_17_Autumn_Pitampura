//Deepak Aggarwal, Coding Blocks
//deepak@codingblocks.com

#include <iostream>
#include <cstring>
using namespace std;

class Car{
    int modelNo;
    int price;
    char color; //R B W
    char *nameOfCompany;    //dynamic
    char *name;
    int wheels;
public:
    Car(const char * carName, const char * compName,
        int model, char c, int p = 100000,  int w = 4){
        //default parameters : rightmost
        // name = carName;
        cout << "Ctor called " << name << endl;
 
        name = new char[strlen(carName) + 1]; //for null char
        strcpy(name, carName);

        nameOfCompany = new char[strlen(compName) + 1]; //for null char
        strcpy(nameOfCompany, compName); 

        price = p;
        modelNo = model;
        color = c;
        wheels = w;
    }

    void updateName(const char * newName){
        delete [] name;
        name = new char[strlen(newName)];
        strcpy(name, newName);
        // name = NULL;
    }

    void showCar(){
        cout << name << endl;
        cout << nameOfCompany << endl;
        cout << modelNo << endl;
        cout << price << " " << wheels << " " << color << endl;
    }

    // void deleteAll(){
    ~Car(){
        //destructor or dtor
        cout << "Dtor called " << name << endl;
        delete [] name;
        delete [] nameOfCompany;
    }
};


void foo(){
    // Car C("Q3", "Audi", 3 , 'G', 5700000, 4);
    // C.deleteAll();
}


int main(){
    Car C("Nano", "Tata Motors", 100, 'B', 10000000);
    Car D("Nanov2", "Tata Motors", 100, 'B', 10000000);
    C.showCar();
}