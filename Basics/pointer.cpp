# include <iostream> 
using namespace std; 

int main(int argc, char const *argv[])
{
    int var[3] = {10,100,1000};
    for (size_t i = 0; i < 3; i++)
    {
        *(var+i) = i; 
    }
    for (size_t i = 0; i < 3; i++)
    {
        cout << "value of " << i << " " << var[i] << endl; 
    }
    int len = sizeof(var) / sizeof(var[0]);
    cout << len << endl; 

    return 0;
}
