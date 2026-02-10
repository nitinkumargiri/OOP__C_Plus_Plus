#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
int main (){

    cout << "🔑🔑🔑___WELCOME TO PASSWORD GENERATOR ___🔑🔑🔑";
    int length;
    string characters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz1234567890!@#$%^&*";

    cout << "\nenter password length: ";
    cin >> length;

    srand(time (0));

    cout <<"\ngenerated password : ";

    for (int i = 0; i < length; i++) {
        int randomeIndex =rand() % characters.length();
        cout << characters [randomeIndex];

    }

    return 0;
}
