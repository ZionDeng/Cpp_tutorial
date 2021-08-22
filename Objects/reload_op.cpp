#include <iostream>

using namespace std;

class Box{
    private:
    double length;
    double breadth; 
    double height;

    public:
    double getVolume(void) {return length * breadth * height;}
    void setLength(double l) {length = l;}
    void setBreadth(double b) {breadth = b;}
    void setHeight(double h) {height = h;}

    Box operator+(const Box& b) {
        Box box;
        box.length = this->length + b.length;
        box.breadth = this->breadth + b.breadth;
        box.height = this->height + b.height;
        return box;
    }
};

int main(){
    Box box1, box2, box3;
    double volume = 0.0;

    box1.setLength(6.0);
    box1.setBreadth(7.0);
    box1.setHeight(5.0);

    box2.setLength(1.0);
    box2.setBreadth(3.0);
    box2.setHeight(5.0);

    box3 = box1 + box2;

    volume = box3.getVolume();
    cout << volume << endl;


}