# include <iostream> 
using namespace std; 

class Box{
    public:
        double length; 
        double breadth;
        double height;

        double get(void);
        void set( double len, double bre, double hei);

};
double Box::get(void){
    return length*breadth * height;
}

void Box::set(double len, double bre, double hei){
    length = len;
    breadth = bre; 
    height = hei; 
}
int main(int argc, char const *argv[])
{
    Box box1, box2, box3;
    double volume = 0.0;
    box3.set(16,8,12);
    cout << box3.get() <<endl;
    return 0;
}
