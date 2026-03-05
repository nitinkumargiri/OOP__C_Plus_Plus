#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
int main(){
    int num;
    cout << "enter your choice : ";
    cin >> num;

    srand (time(0));
    int num1 = rand () % 100 + 1;
    cout <<"\ncomputer choice is : " <<num1;

    if (num > num1){
        cout << "\nyou win....✅✅✅\n";
    }
    else if (num < num1)
    {
        cout << "\ncomputer win..😊😊\n";
        
    }
    else if (num == num1)
    {
        cout << "match is draw\n";
    }
    else {
        cout <<" Invailed input ";
    }

    return 0;

}