#include <iostream>
using namespace std; 

int sum(int a, int b = 20){
    int res; 
    res = a + b; 
    return res;
}

int main(){
    int a = 100; 
    int b = 200;
    int res; 
    res = sum(a,b);
    cout << res << endl;

    int resa = sum(a);
    cout << resa << endl;
    return 0; 

}