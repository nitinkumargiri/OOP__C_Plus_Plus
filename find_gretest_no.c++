#include <iostream>
using namespace std;

int main (){
    cout << "...WELCOME TO THIS PLETFORM...";
    cout << "\nAuthor -> ..Nitn giri ..";
    int num1 , num2,num3;
    

    cout << "\nenter your first number : ";
    cin >> num1;
    cout << "enter your second number : ";
    cin >> num2;
    cout <<" enter your third number : ";
    cin >> num3;

    if (num1 >= num2 && num1 >= num3)
    {
        cout <<num1 <<" is a greatest number....!";
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        cout <<num2 <<" is a gretest number....!";
    }
    else if (num3 >= num1 && num3 >= num2)
    {
        cout <<num3 <<" is a gretest number...!";
    }else{
        cout <<"invailed input..!";
    }

    return 0;
       
    
}