#include <iostream>
using namespace std;

enum Level{

    low = 2,
    medium,
    heigh

};
int main(){

    enum Level myvar = medium;
    switch (myvar)
    {
    case 1:
        cout << "low lavel";
        break;
    case 2:
        cout << "medium level";
        break;
    case 3:
        cout << "low level";
        break;
    default:
        cout << "try again";
        break;
    }

    return 0;
}