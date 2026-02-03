# include <iostream>
using namespace std;

int main (){
    
    char operatore;
    float num1, num2,result; 

    cout <<"Enter your first number : ";
    cin >> num1;

    cout << "Enter your second number : ";
    cin >> num2;
    
    cout << "enter  your ooperator that you want to perform ( + , - , * , / ) : ";
    cin >> operatore;

    switch (operatore)
    {
    case '+':
    
        result = num1 + num2;
        cout <<num1 <<" + "<<num2 <<" = " <<result;
        
        break;

    case '-':
        
        result = num1 - num2;
        cout << num1 <<" - "<<num2 <<" = " <<result;
        break;

    case '*':
        
        result = num1 * num2;
        cout <<num1 <<" * " <<num2 <<" = "<<result;
        break;

    case '/':
        
        if (num2 != 0)
        {
            result = num1 / num2;
            cout <<num1 <<" / "<<num2 <<" = "<<result;
            
        }else {
            cout<< " Error: from divided by zero ('0')";

        }
        break;
    
    default:
        cout << "\nInvailed operator...!";
        break;
    }

    return 0;

}