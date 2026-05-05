#include <iostream>
using namespace std;
class rectangle {
    public:
    double length;
    double width;
    
    double areacalculate(){
        return length * width;
    }
    void displaydimention(){
        cout <<"length: "<<length <<"\n"<<"width : "<<width <<"\n";
    }
};

int main(){
    rectangle box;
    box.length = 10.2;
    box.width = 5.1;

    box.displaydimention();
    cout <<"total area: "<<box.areacalculate()<<endl;

    return 0 ;
}
