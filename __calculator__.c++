#include <iostream>
#include <string>
using namespace std;

int main (){
    float  num1 ,num2 ,choice;
    float result;

    cout << "enter your first number : ";
    cin >> num1;
    cout << "enter your second number : ";
    cin >> num2;

    cout << "1. addition\n";
    cout << "2. substraction\n";
    cout << "3. multiplication\n";
    cout << "4. division\n\n";

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
    
    }else if (choice == 3)
    {
        result = num1 * num2;
        cout <<"the multiplication of "<<num1 <<" * " <<num2 <<" = "<<result;
        
    }else if (choice == 4)
    {
        if (num2 != 0)
        {
            result = num1 / num2;
            cout <<"the division of "<<num1 <<" / " <<num2 <<" = " <<result;
        }
        else{
            cout<<"ERROR: dovided by zero..!";
        }
        
        
    }
    
    
    
    else {
        cout<< "invailed choice..";
    }
    

}