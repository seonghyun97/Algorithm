#include <bits/stdc++.h>
using namespace std;

// key, val 둘다 int형인 map 선언
map<int, int> mp;

int main()
{
    // 문자열 입력
    string s;
    cin >> s;

    // 'a'아스키코드인 97를 0으로 기준 맞춰서 map에 저장
    for (auto i : s)
        mp[i - 97] += 1;

    // 출력. 대입되지 못한 값은 0으로 초기화 되어있음.
    for (int i = 0; i < 26; i++)
        cout << mp[i] << ' ';
}