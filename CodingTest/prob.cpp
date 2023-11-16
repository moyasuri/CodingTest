#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <stack>
using namespace std;

vector<string> split(string input, string delimiter)
{
    vector<string> ret;
    long long pos;
    string token = "";
    while ((pos=input.find(delimiter)) != string::npos)
    {
        token = input.substr(0, pos);
        ret.push_back(token);
        input.erase(0, pos + delimiter.length());

    }
    ret.push_back(input);

    return ret;
}


class myInfo
{
public:
    myInfo(const string& n, int s_t, int w_t) :name(n), start_t(s_t), working_t(w_t) {}
    
    string name;
    int start_t;
    int working_t;
    
        
};

bool conf(myInfo A, myInfo B)
{
    return A.start_t < B.start_t;
}


vector<myInfo> _my;
vector<string> _ans;
vector<pair<string, int>> remain;

int _time = 0;
int _cnt = 0;


vector<string> solution(vector<vector<string>> plans) {




    //plans.push_back({ "book", "12:00","302"});
    vector<string> getInfo;
    for (vector<string> plan: plans)
    {
        getInfo.clear();
        getInfo.push_back(plan[0]);
        
        vector<string> str_temp;

        str_temp = split(plan[1], ":");
        int timeCal;
        timeCal=(atoi(str_temp[0].c_str()) * 60 + atoi(str_temp[1].c_str()));

        _my.push_back(myInfo(plan[0], timeCal, atoi(plan[2].c_str())));
        
    }

    sort(_my.begin(), _my.end(), conf);

    
    int i = 0;
    while (_cnt<_my.size())
    {
        
        if (remain.size())
        {
            if (_time < _my[i].start_t)
            {
                int temp_t = _time;
                while (1)
                {
                    _time++;
                    remain.back().second--;
                    if (!remain.back().second)
                    {
                        _ans.push_back(remain.back().first);
                        remain.pop_back();
                        _cnt++;
                        break;
                    }
                    
                    if (_time == _my[i].start_t)
                    {
                        i++;
                        break;
                    }
                }
            }
            else
            {
                int temp_t = _time;
                while (_time <= temp_t + _my[i].working_t) 
                {

                    if (_time == temp_t + _my[i].working_t)
                    {
                        _ans.push_back(_my[i].name);
                        i++;
                        _cnt++;
                        break;
                    }
                    if (_time >= _my[i + 1].start_t)
                        {
                            remain.push_back({ _my[i].name,(temp_t + _my[i].working_t) - _time });
                            i++;
                            break;
                        }
              
                    _time++;
                }

            }
        }
        else // 남아 있지 않을때를 보는거야.
        {
            if(_time < _my[i].start_t)
            {
                _time++; 
            }
            else
            {
                int temp_t = _time;
                while (_time < temp_t + _my[i].working_t)
                {
                    if (_time >= _my[i+1].start_t)
                    {
                        remain.push_back({ _my[i].name,(temp_t + _my[i].working_t) - _time });
                        i++;
                        break;
                    }
                    if (_time == temp_t + _my[i].working_t)
                    {
                        _ans.push_back(_my[i].name);
                        i++;
                        _cnt++;
                        break;
                    }
                    _time++;
                }

            }

        }


    }
    

   
    vector<string> answer = _ans;
    return answer;
}

int main()
{

    vector<vector<string>> myinput = { {"korean", "11:40", "30"},{"english", "12:10", "20"},{"math", "12:30", "40"} };
    solution(myinput);

}