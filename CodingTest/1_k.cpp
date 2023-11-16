#include<iostream>
#include<map>

using namespace std;


bool isODD= false;
int cntOdd;
int pos=-1;



int cnt[26];
string input;


int main() 
{
    // 알파벳 대문자는 65 90
    // 홀수 일때, 짝수일때 나눠야 할 듯
    // 문자열의 길이가 2n일때 -> 각 알파벳이 2로 나누어 떨어지는가, 나누어떨어진다면 아스키코드가 짧은것부터 순서대로 써주기
    // 문자열의 길이가 2n-1 이라면, 알파벳이 2로 나누어 나머지가 1인 아이가 있는가. 있다면 유일해야하며, 가운데 위치하여야함. ->맞음
    cin >> input;


    // 이거 잊지맙시다.
    //for (char a : str) {
    //    cnt[a - 'a']++;
    //}
    //for (int i = 0; i < 26; i++) cout << cnt[i] << " ";


    for (char a : input)
    {
        cnt[a - 'A']++;
    }

    for (int i = 0;i < 26;i++)
    {
        if ((cnt[i] % 2))
        {
            ++cntOdd;
            pos = i;
        }
    }

    if (cntOdd > 1)
    {
        std::cout << "I'm Sorry Hansoo" << endl;
        exit(0);
    }
    string oddcha = "";

    if (cntOdd)
    {
    oddcha = 'A' + pos;
    cnt[pos]--;
    }

    string output;
    for (int i = 0; i < 26;i++)
    {


            for (int j = 0; j < cnt[i] / 2;j++)
            {
                output.push_back(i + 'A');
            }


    }
   

    string suf(output.rbegin(), output.rend());
    string ret;
    

    ret = output + oddcha + suf;

    cout << ret;



    return 0;
}
