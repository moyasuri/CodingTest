#include<iostream>
#include<algorithm>
#include <vector>
using namespace std;

bool conf(pair<int, int> a, pair<int, int> b)
{

    return a.second > b.second;

}

int main(int argc, char** argv)
{


    int W, N;
    cin >> W >> N;

    int cnt_T = N;

    vector<pair<int, int>> myPair;

    int answer = 0;
    while (cnt_T--)
    {
        int temp1, temp2;
        cin >> temp1 >> temp2;
        myPair.push_back({ temp1,temp2 });

    }
    sort(myPair.begin(), myPair.end(), conf);

    for (pair<int, int> p: myPair)
    {
        if (W - p.first >= 0)
        {
            W -= p.first;
            int value = p.second * p.first;
            answer += value;
        }
        else
        {
            int value = p.second * W;
            answer += value;
            break;

        }

    }

    cout << answer;











    return 0;
}