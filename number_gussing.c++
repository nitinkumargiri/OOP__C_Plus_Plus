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

}