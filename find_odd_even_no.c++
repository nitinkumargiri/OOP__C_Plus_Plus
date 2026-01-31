# include <iostream>
using namespace std;

int main(){
    int  num;
    cout <<"WELCOME TO FIND ODD EVEN PROGRAM\n";

    cout <<"Enter your number: ";
    cin >> num;

    if (num %2 == 0)
    {
        cout << "it is a even number...!";
        
    }else{
        cout << "it is not a even number...!";
    }

    return 0;
    
}