#include<iostream>
#include<map>


using namespace std;
int t, n;
string a, b;
int main() {
    cin >> t; // testcase를 받아요
    while (t--) {
        map<string, int> _map;
        
        cin >> n;

        for (int i = 0; i < n; i++) {
            cin >> a >> b;
            _map[b]++; // 띄어쓰기 기준이니까 뒤의 스트링을 받아요 앞에가 뭔지는 중요하지않아요
        }
        
        long long ret = 1;
        
        for (auto c : _map) {
            ret *= ((long long)c.second + 1);
        }
        ret--;
        cout << ret << "\n";
    }
    return 0;
}
