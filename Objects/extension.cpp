// class derived class: access-specificier base class

#include <iostream>
using namespace std;

class Shape{
    public:
        void setWidth(int w){width=w;}
        void setHeight(int h){height=h;}
    protected:
        int width;
        int height;
};

class Rectangle : public Shape{
    public:
        int getArea(){return width * height;}
};

int main(){
    Rectangle rec; 
    rec.setWidth(5);
    rec.setHeight(7);

    cout << "Total area: " << rec.getArea() << endl;
}

