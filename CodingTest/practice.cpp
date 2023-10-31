#include <iostream>
#include <vector>
#include <map>

using namespace std;

int n, m;
string s;
string a[1000004];
map<string, int> mp;
map<int, string> mp2;
int main()
{




	// 1-I


	//string b = "asdfsd";
	//cout << atoi(b.c_str());
	//// 문자라면 0나오고
	//// 숫자라면 그 숫자가 나온다.

	//// string-int -> map이 좋고
	//// int -string -> map, array 둘다 된다.

	//cin >> n >> m;
	//for (int i = 0; i < n; i++) {
	//	cin >> s;
	//	mp[s] = i + 1;
	//	mp2[i + 1] = s;
	//	a[i + 1] = s;
	//}
	//for (int i = 0; i < m; i++) {
	//	cin >> s;
	//	if (atoi(s.c_str()) == 0) { // 문자열이라면
	//		cout << mp[s] << "\n";
	//	}
	//	else { // 그게 아니라면, a
	//		cout << a[atoi(s.c_str())] << "\n"; //숫자라면 문자나와라
	//		//
	//		// cout << mp2[atoi(s.c_str())] << "\n"; 
	//	}
	//}

	// 1-J


	map<string, int> _map;


	_map["abc"]++;

	for (auto c : _map)
	{
		c.second
	}

	/*cout << "abc".second;*/



	return 0;


}