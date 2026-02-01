#include <iostream>
using namespace std;
int main (){

    int age;
    cout <<"Enter your age for cheaking vote eligiblity or not : ";
    cin >> age;

    while (age = true)
    {
        if (age >= 18)
        {
            cout << "you are eligible for votting...!✅✅";
            
        }else {
            cout << "you are not eligible for votting..!❌❌";
        }

        age++;
        break;
        
    }
    
    
}