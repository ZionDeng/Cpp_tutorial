/* virtual class */
#include <iostream>

using namespace std;

class Shape 
{
    public:
    virtual int getArea() = 0;
    void setWidth(int w){
        width = w;
    }
    void setHeight(int h){height = h;}
    protected:
    int width;
    int height;
};

class Rect: public Shape
{
    public:
    int getArea(){return (width * height) / 2;}
};

int main(){
    Rect rect;
    rect.setWidth(5);
    rect.setHeight(7);
    cout << "total area: " << rect.getArea() << endl;
    return 0;
}