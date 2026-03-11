#include <iostream>
using namespace std;

int main (){
    cout <<"___WELCOME HERE___"<<"\n";
    int marks;
    cout <<"enter your marks : ";
    cin >>  marks;

    if (marks >= 90 && marks <= 100){
        cout <<"Grade:- 'o'"<<"\n"<<"it is a very good marks..";
    }    
    else if (marks <= 90 && marks >= 80){
        cout <<"Grade:- 'A+'"<<"\n" <<"it is a good marks..";
     
    }
}