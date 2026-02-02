#include <iostream>
using namespace std;
int main (){
    cout << "😊😊 WELCOME TO TABEL GENERATOR IN C++ 😊😊";
    
    int tabel;
    cout <<"\nenter numeric value that you want to generate in tabel form : ";
    cin >> tabel;

    
    for (int i = 1; i < 11; i++)
    {
        cout << tabel <<" * " << i << " = "<<tabel * i << "\n";
        
    }

    return 0;
    
}