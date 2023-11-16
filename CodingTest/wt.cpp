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


	vector<int> A_t(N);
	A_t.push_back(A[0].first);
	vector<int> B_t(N);
	B_t.push_back(B[0].first);
	
	for (int i = 1; i < N; i++)
	{
		A_t.push_back(min(A[i].first + A_t[i - 1], B_t[i - 1] + B[i - 1].second + A[i].first));
		B_t.push_back(min(B[i].first + B_t[i - 1], A_t[i - 1] + A[i - 1].second + B[i].first));

	}

	cout << min(A_t[N], B_t[N]);


	

}