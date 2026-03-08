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

    if (num1 == 1 && num == 2 || num1 == 2 && num == 3 || num1 == 3 && num == 1){
        cout <<"computer win >...!" <<"\n";
    }
    else if (num1 == 2 && num == 1 || num1 == 3 && num == 2 || num1 == 1 && num == 3 ){
        cout <<"you won >...!" <<"\n";
    }
    else if (num1 == 1 && num == 1 || num1 == 2 && num == 2 || num1 == 3 && num == 3){
        cout <<"match Draw...!";
    }
    else {
        cout <<"Invailed input ..!";
    }

    return 0;
}