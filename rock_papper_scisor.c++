#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
using namespace std;

int main (){
    cout <<"1. rock"<<"\n";
    cout <<"2. Papper"<<"\n";
    cout <<"3. scisor"<<"\n";

    int num1;
    cout << "enter your choice : ";
    cin >> num1;

    srand (time(0));
    int num = rand () %2 + 1;
    cout <<"computer choice : "<<num <<"\n";

    if (num1 == 1 && num == 2){
        cout <<"computer win >...!";
    }

}