#include <iostream>
using namespace std;
int main()
{
    int choice;
    string name;
    int age;

    cout << "enter your choice : ";
    cin >> choice;
    switch (choice)
    {
        case 1:
        cout << "enter your detail" << "\n";
        cout << "enter your name : " << "\n";
        cin >> name;
        cout << "enter your age : " << "\n";
        cin >> age;
        cout << "detail saved successfully";

        case 2:
        cout << "name : " << name << "\n";
        cout << "age: " << age << "\n";
        break;
    }
}
