#include <iostream>

using namespace std; 

int main(int argc, char const *argv[])
{
    int arr[5] = {1,2,3,4,5}; 
    for (int &x : arr){
        x *= 2; 
        cout << x << endl;
    }
    for (auto &x : arr){
        x *= 2;
        cout << x << endl;
    }

    string str = "something";
    for (auto &c : str){
        c = toupper(c);
    }
    cout << str << endl;
}
