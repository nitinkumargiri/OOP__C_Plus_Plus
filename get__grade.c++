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
    else if (marks < 90 && marks >= 80){
        cout <<"Grade:- 'A+'"<<"\n" <<"it is a good marks..";
    }
    else if (marks < 80 && marks >= 60){
        cout <<"Grade:- 'A" <<"\n" <<"first Div";
    }
    else if (marks < 60 && marks >= 45){
        cout <<"Grade:- 'B" <<"\n" <<"second Div"; 
    }
    else if (marks < 45 && marks >= 30){
        cout <<"Grade:- 'c" <<"\n" <<"third div";
    }
     
    
}