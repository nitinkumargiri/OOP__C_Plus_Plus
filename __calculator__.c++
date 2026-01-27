#include <iostream>
#include <string>
using namespace std;

int main (){
    int  num1 ,num2 ,choice ,result;

    cout << "enter your first number : ";
    cin >> num1;
    cout << "enter your second number : ";
    cin >> num2;

    cout << "enter your choice(1,2,3,4): ";
    cin >> choice;

    if (choice == 1)
    {
        result = num1 + num2;
        cout <<"the sum of "<<num1 <<" + " <<num2 <<" = " <<result;
    
    }else if (choice == 2)
    {
        result = num1 - num2;
        cout <<"the sub of "<<num1 <<" - " <<num2 <<" = " <<result;
        /* code */
    }
    
    else {
        cout<< "invailed choice..";
    }
    

}