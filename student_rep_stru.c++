#include <iostream>
#include <string>
using namespace std;
struct
{
    string name;
    int age;
    char grad;

} student_info;

int main (){
    student_info.name = "nitin giri";
    student_info.age = 18;
    student_info.grad = 'A';


cout <<student_info.name <<"\n" <<student_info.age <<"\n" <<student_info.grad;

}