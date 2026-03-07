#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
using namespace std;

int main (){
    srand (time(0));
    int num = rand () % 100 + 1;
    cout <<num;
}