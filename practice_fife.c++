#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;

    // Push elements onto the stack
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.top() <<"\n"; //output : 30

    s.pop();
    cout <<"new top after pop : " <<s.top() <<"\n";

    return 0;
}