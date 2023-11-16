#include <iostream>
#include <vector>
#include <cmath>


using namespace std;

long long _mod(int n)
{
    if (n == 0)
        return 1;
    
    return (long long)pow(10, n) + _mod(n - 1);

}

int main()
{


    int n,i=0;
    cin >> n;

    while(1)
    {


        if (_mod(i) % n == 0)
        {
            cout << i+1;
            break;

        }
        ++i;
        
    }




    return 0;
    

}