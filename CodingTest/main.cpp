#include <iostream>
#include <vector>


using namespace std;

int main2()
{




    // 1-G
    //{

    //    string a = "abcde";
    //    // reverse(a.begin(), a.begin() + 3);
    //    // cbade 결과값


    //    string input;
    //    cin >> input;

    //    input.find("*", input.size());



    //    a.substr(0, 3); // abc
    //    cout << a.substr(0); // abcde;

    //    int n;
    //    string s, ori_s, pre, suf;

    //    cin >> n;
    //    cin >> ori_s;
    //    int pos = ori_s.find('*');
    //    pre = ori_s.substr(0, pos);
    //    suf = ori_s.substr(pos + 1);
    //    for (int i = 0; i < n; i++) {
    //        cin >> s;
    //        if (pre.size() + suf.size() > s.size()) {
    //            cout << "NE\n";
    //        }
    //        else {
    //            if (pre == s.substr(0, pre.size()) && suf == s.substr(s.size() - suf.size())) cout << "DA\n";
    //            else cout << "NE\n";
    //        }
    //    }
    //}

    // 1-H
    /*{

        int n, k, temp, psum[100001], ret = -1000000;
        cin.tie(NULL); cout.tie(NULL);
        cin >> n >> k;
        for (int i = 1; i <= n; i++) {
            cin >> temp; psum[i] = psum[i - 1] + temp;
        }
        for (int i = k; i <= n; i++) {
            ret = max(ret, psum[i] - psum[i - k]);
        }
        cout << ret << "\n";



    }*/


    // -------------*  psum을 만드는코드 *---------------
    //int a[100004], b, c, psum[100004], n, m;
    //
    //
    //
    //cin >> n >> m;
    //for (int i = 1; i < n; i++)
    //{
    //     cin >> a[i];
    //    psum[i] = psum[i - 1] + a[i];
    //
    //}


    //int n = 100001, k = 0, psum[100001] = {}, ret = -100 * 100000;

    //cin >> n >> k;

    //for (int i = 1; i < n; i++)
    //{
    //    int temp;
    //    cin >> temp;

    //    psum[i] = psum[i - 1] + temp;
    //}


    //for (int i = k; i <= n; i++)
    //{
    //    int tempsum = psum[i] - psum[i - k];

    //    ret = max(tempsum, ret);

    //}
    //cout << ret;




    //1-I
    // string -int -> map 으로가시고
    // int -string -> map, array 둘다 된다.
    

    return 0;


}