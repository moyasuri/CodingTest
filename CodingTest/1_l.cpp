#include <iostream>
#include <map>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;
int n, m;
int cnt[15000];
int k = 2;
vector<int> b;
int p_cnt;



//void combi(int start, vector<int> b, int n,int condi) {
//    if (b.size() == k) {
//
//        if (cnt[b[0]] + cnt[b[1]] == condi)
//        {
//            cnt[b[0]] = 0;
//            cnt[b[1]] = 0;
//            ++p_cnt;
//        }
//        return;
//    }
//    for (int i = start + 1; i < n; i++) {
//        b.push_back(i);
//        combi(i, b, n,condi);
//        b.pop_back();
//    }
//    return;
//}

int main()
{

    cin >> n >> m;
    cin.ignore();


    for (int i = 0; i < n; i++) cin >> cnt[i];

    //combi(-1, b, n, m);
    
    

    // sort(cnt, cnt + n);

    for(int i =0; i<n;i++)
        for(int j=0; j<i; j++)
            {
            // logic
                cout << cnt[i] << " " << cnt[j] << endl ;

            }
    
    
    return 0;
}
