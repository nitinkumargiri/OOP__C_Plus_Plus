#include <iostream>
using namespace std;

class car{
    public:
    string brand;
    float price;
    int speed;
    
    void show() {
        cout <<"brand name : " <<brand <<"\n";
        cout <<"car price : " <<price <<endl;
        cout <<"car speed : " <<speed <<endl;
    }
};

int main(){
    car car1;

    car1.brand = "LAMBORGINY";
    car1.price = 3.50000;
    car1.speed = 120;

    car1.show();

    return 0;
}