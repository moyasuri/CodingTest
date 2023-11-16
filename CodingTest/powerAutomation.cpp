#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int numBall[6];
int cost = 0;
int _pick = 2;
int _pick_cnt = 0;
int _change = 5;
int _change_cnt = 0;
int _empty = 0;


bool conf(const pair<string, int>& type, const pair<string, int>& type2) {
	return type.second < type2.second;
}


void countempty(vector<pair<string,int>> _type)
{
	_empty = 0;
	for (int i = 0; i < 6;i++)
	{
		if (_type[i].second == 0)
			++_empty;
	}
}

int main()
{

	string input;
	vector<pair<string, int>> type;
	type.push_back(make_pair("A", 0));
	type.push_back(make_pair("B", 0));
	type.push_back(make_pair("C", 0));
	type.push_back(make_pair("D", 0));
	type.push_back(make_pair("E", 0));
	type.push_back(make_pair("F", 0));

	for (int i = 0; i < 6; ++i) {
		cin >> type[i].second;
	}

	std::sort(type.begin(), type.begin() + 6, conf);
	// nozel을 가장 적은공부터 배치

	cout << "처음 배치된 공" << endl;
	for (int i = 0; i < 6; ++i) {
		cout << type[i].first << ":" << type[i].second << " ";  // nozzel에 배치된 공을 출력합니다.
	}
	cout << endl<< "---------------------------------------------" << endl;


	if (_empty == 0) {

	
		cout << endl;

		while (type[0].second)
		{
			type[0].second--;
			type[1].second--;
			type[2].second--;
			type[3].second--;
			cost += _pick;
			_pick_cnt++;
		}

		for (int i = 0; i < 6; ++i) {
			cout << type[i].first << ":" << type[i].second << " " ;  // nozzel에 배치된 공을 출력합니다.
		}


		cout << endl << "cost_sum : " << cost << " " << "pick count_sum : " << _pick_cnt << " change count_sum : " << _change_cnt << endl << endl;
		std:: sort(type.begin(), type.begin() + 6, conf);
		countempty(type);

	}

	if (_empty == 1) {

		_pick_cnt = 0;
		while (type[1].second)
		{

			type[1].second--;
			type[2].second--;
			type[3].second--;
			type[4].second--;
			cost += _pick;
			_pick_cnt++;
			
		}
		cost += _change;
		_change_cnt++;

		for (int i = 0; i < 6; ++i) {
			cout << type[i].first << ":" << type[i].second << " ";  // nozzel에 배치된 공을 출력합니다.
		}
		cout << endl << "cost_sum : " << cost << " " << "pick count : " << _pick_cnt << " change count_sum : " << _change_cnt << endl << endl;
		std::sort(type.begin(), type.begin() + 6, conf);
		countempty(type);


	}

	if (_empty == 2)
	{
		_pick_cnt = 0;
		if (type[3].second >= 2 * type[2].second)
		{
			while (type[2].second)
			{

				type[2].second--;
				type[3].second -= 2;
				type[4].second--;
				cost += _pick;
				_pick_cnt++;
			}
		}
		else
		{
			while (type[2].second)
			{
				type[2].second--;
				type[3].second--;
				type[4].second--;
				type[5].second--;
				cost += _pick;
				_pick_cnt++;
			}
		}

		cost += _change;
		_change_cnt++;
		
		for (int i = 0; i < 6; ++i) {
			cout << type[i].first << ":" << type[i].second << " ";  // nozzel에 배치된 공을 출력합니다.
		}

		cout << endl << "cost_sum : " << cost << " " << "pick count : " << _pick_cnt << " change count_sum : " << _change_cnt << endl << endl;
		std::sort(type.begin(), type.begin() + 6, conf);
		countempty(type);
	}

	if (_empty == 3)
	{
		_pick_cnt = 0;
		if (type[4].second >= 2 * type[3].second)
		{
			while (type[3].second)
			{

				type[3].second--;
				type[4].second-=2;
				type[5].second--;
				cost += _pick;
				_pick_cnt++;
			}
		}
		else
		{
			while (type[3].second>0)
			{
				type[3].second-=2;
				type[4].second--;
				type[5].second--;
				cost += _pick;
				_pick_cnt++;
			}
		}

		if (type[3].second < 0)
			type[3].second = 0;
		cost += _change;
		_change_cnt++;

		for (int i = 0; i < 6; ++i) {
			cout << type[i].first << ":" << type[i].second << " ";  // nozzel에 배치된 공을 출력합니다.
		}

		cout << endl << "cost_sum : " << cost << " " << "pick count : " << _pick_cnt << " change count_sum : " << _change_cnt << endl << endl;
		std::sort(type.begin(), type.begin() + 6, conf);
		countempty(type);
		
	}

	if (_empty == 4)
	{
		_pick_cnt = 0;
		if (type[5].second >= 3 * type[4].second)
		{
			while (type[4].second)
			{

				type[4].second-- ;
				type[5].second-=3;
				cost += _pick;
				_pick_cnt++;
			}
		}
		else 
		{
			while (type[4].second>0)
			{
				type[4].second-=2;
				type[5].second-=2;
				cost += _pick;
				_pick_cnt++;
			}
		}
		
		if (type[4].second < 0)
			type[4].second = 0;
		if (type[5].second < 0)
			type[5].second = 0;

		cost += _change;
		_change_cnt++;
		
		for (int i = 0; i < 6; ++i) {
			cout << type[i].first << ":" << type[i].second << " ";  // nozzel에 배치된 공을 출력합니다.
		}

		cout << endl << "cost_sum : " << cost << " " << "pick count : " << _pick_cnt << " change count_sum : " << _change_cnt << endl << endl;
		std::sort(type.begin(), type.begin() + 6, conf);
		countempty(type);
	}

	if (_empty == 5)
	{
		_pick_cnt = 0;
			while (type[5].second > 0)
			{
				type[5].second -= 4;
				cost += _pick;
				_pick_cnt++;
			}

		if (type[5].second < 0)
			type[5].second = 0;
		cost += _change;
		_change_cnt++;

		for (int i = 0; i < 6; ++i) {
			cout << type[i].first << ":" << type[i].second << " ";  // nozzel에 배치된 공을 출력합니다.
		}
		

		cout << endl << "cost_sum : " << cost << " " << "pick count : " << _pick_cnt << " change count_sum : " << _change_cnt << endl << endl;

	}


}
