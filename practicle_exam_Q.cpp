#include <iostream>
using namespace std;
class student{
    public:
    string name;
    int age;

    void display(){
        cout <<name<<endl;
        cout << age <<endl;
    }
};
int main (){
    student s1;
    s1.name = "niitn";
    s1.age = 20;
    s1.display();
}