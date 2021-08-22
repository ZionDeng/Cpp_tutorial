# include <iostream> 
using namespace std; 

int main(int argc, char const *argv[])
{
    int a[5][2] = { {0,0}, {1,2}, {2,4}, {3,6},{4,8}};
    for (size_t i = 0; i < 5; i++)
    {
        for (size_t j = 0; j < 2; j++)
        {
            cout << a[i][j] << endl;
        }
        
    }
    double runoobAarray[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
    for (size_t i = 0; i < 5; i++)
    {
        cout << *(runoobAarray+i) << endl;
    }
    
    
    return 0;
}
