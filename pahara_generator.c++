#include <iostream>
using namespace std;
int main (){
    
    int tabel;
    cout <<"enter numeric value that you want to generate in tabel form : ";
    cin >> tabel;

    
    for (int i = 1; i < 11; i++)
    {
        cout << tabel <<" * " << i << " = "<<tabel * i << "\n";
        
    }
    
}