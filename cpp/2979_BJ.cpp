#include <bits/stdc++.h>
using namespace std;
//<int,int>형의 map 변수 선언
map<int, int> mp;
// 필요한 변수들 선언
int a, b, c;
int f, l;
int ans;

int main()
{
    // a,b,c 주차요금 입력
    cin >> a >> b >> c;

    // 3트럭의 시간입력
    for (int i = 0; i < 3; i++)
    {
        cin >> f >> l;
        // 트럭의 겹치는 시간대에 추가
        for (int i = f; i < l; i++)
            mp[i] += 1;
    }

    // 시간대에 맞게 누적된 map에 차의 갯수 누적
    for (auto i : mp)
    {
        if (i.second == 1)
            ans += a;
        else if (i.second == 2)
            ans += (2 * b);
        else if (i.second == 3)
            ans += (3 * c);
        else
            continue;
    }

    // 정답 출력
    cout << ans << '\n';

    return 0;
}