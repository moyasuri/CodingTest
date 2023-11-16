//#include <iostream>
//#include <vector>
//
//
//using namespace std;
//
//int main2()
//{
//
//
//
//
//    // 1-G
//    //{
//
//    //    string a = "abcde";
//    //    // reverse(a.begin(), a.begin() + 3);
//    //    // cbade 결과값
//
//
//    //    string input;
//    //    cin >> input;
//
//    //    input.find("*", input.size());
//
//
//
//    //    a.substr(0, 3); // abc
//    //    cout << a.substr(0); // abcde;
//
//    //    int n;
//    //    string s, ori_s, pre, suf;
//
//    //    cin >> n;
//    //    cin >> ori_s;
//    //    int pos = ori_s.find('*');
//    //    pre = ori_s.substr(0, pos);
//    //    suf = ori_s.substr(pos + 1);
//    //    for (int i = 0; i < n; i++) {
//    //        cin >> s;
//    //        if (pre.size() + suf.size() > s.size()) {
//    //            cout << "NE\n";
//    //        }
//    //        else {
//    //            if (pre == s.substr(0, pre.size()) && suf == s.substr(s.size() - suf.size())) cout << "DA\n";
//    //            else cout << "NE\n";
//    //        }
//    //    }
//    //}
//
//    // 1-H
//    /*{
//
//        int n, k, temp, psum[100001], ret = -1000000;
//        cin.tie(NULL); cout.tie(NULL);
//        cin >> n >> k;
//        for (int i = 1; i <= n; i++) {
//            cin >> temp; psum[i] = psum[i - 1] + temp;
//        }
//        for (int i = k; i <= n; i++) {
//            ret = max(ret, psum[i] - psum[i - k]);
//        }
//        cout << ret << "\n";
//
//
//
//    }*/
//
//
//    // -------------*  psum을 만드는코드 *---------------
//    //int a[100004], b, c, psum[100004], n, m;
//    //
//    //
//    //
//    //cin >> n >> m;
//    //for (int i = 1; i < n; i++)
//    //{
//    //     cin >> a[i];
//    //    psum[i] = psum[i - 1] + a[i];
//    //
//    //}
//
//
//    //int n = 100001, k = 0, psum[100001] = {}, ret = -100 * 100000;
//
//    //cin >> n >> k;
//
//    //for (int i = 1; i < n; i++)
//    //{
//    //    int temp;
//    //    cin >> temp;
//
//    //    psum[i] = psum[i - 1] + temp;
//    //}
//
//
//    //for (int i = k; i <= n; i++)
//    //{
//    //    int tempsum = psum[i] - psum[i - k];
//
//    //    ret = max(tempsum, ret);
//
//    //}
//    //cout << ret;
//
//
//
//
//    //1-I
//    // string -int -> map 으로가시고
//    // int -string -> map, array 둘다 된다.
//    
//
//    return 0;
//
//
//}

#include <iostream>
#include <vector>

using namespace std;



vector<pair<int, int>> A; // W_T // M_T
vector<pair<int, int>> B;
int a_WT, a_MT, b_WT, b_MT;
int N;



int main()
{
	cin >> N;
	int t_N = N - 1;

	while (t_N--)
	{
		cin >> a_WT >> b_WT >> a_MT >> b_MT;
		A.push_back({ a_WT,a_MT });
		B.push_back({ b_WT,b_MT });

	}

	cin >> a_WT >> b_WT;
	A.push_back({ a_WT,0 }); // 이동 시간없음
	B.push_back({ b_WT,0 });


	vector<int> A_t;
	A_t.push_back(A[0].first);
	vector<int> B_t;
	B_t.push_back(B[0].first);

	for (int i = 1; i < N; i++)
	{
		A_t.push_back(min(A[i].first + A_t[i - 1], B_t[i - 1] + B[i - 1].second + A[i].first));
		B_t.push_back(min(B[i].first + B_t[i - 1], A_t[i - 1] + A[i - 1].second + B[i].first));

	}

	cout << min(A_t[N], B_t[N]);




}