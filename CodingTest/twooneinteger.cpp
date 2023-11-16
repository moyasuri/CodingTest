#include <iostream>

int cnt;


using namespace std;

int cnt_dot(int r)
{
    cnt = 0;
    for (int i = 1; i < r; i++)
        for (int j = 1;j < r;j++)
        {
            if (j * j + i * i < r * r)
                cnt++;
        }

    
    return 4 * (cnt + (r - 1)) + 5;
}

int main()
{


    //cout << cnt_dot(4)-cnt_dot(2)+4;

    pair<int, int> c;
    
    
}