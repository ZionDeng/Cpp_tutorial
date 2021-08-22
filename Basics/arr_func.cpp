#include <iostream>
using namespace std;

double getAverage(int *arr, int size);

int main(int argc, char const *argv[])
{
    // arr of size 5 
    int balance[5] = {100,2,3,15,50};
    double avg;

    // do here 
    avg = getAverage(balance, 5);
    cout << avg << endl;
    return 0;
}

double getAverage(int *arr, int size){
    int i, sum = 0; 
    double avg; 
    for (i = 0; i < size; i++){
        sum += arr[i];
    }
    avg = double(sum) / size;
    return avg;
}
