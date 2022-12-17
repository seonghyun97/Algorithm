#include <bits/stdc++.h>
using namespace std;
#define For(i, n) for (int i = 0; i < n; i++)
#define MAX_N 100004
int n, k;
// 누적합 초기화
int s[MAX_N];

int main()
{
    // 입력
    cin >> n >> k;
    int a[n];
    vector<int> ret;

    // 누적합
    For(i, n)
    {
        cin >> a[i];
        if (i > 0)
        {
            s[i] = s[i - 1] + a[i];
        }
        else
            s[i] = a[i];
    }

    // 구간합 구하기
    for (int i = k - 1; i < n; i++)
    {
        if (i == k - 1)
        {
            ret.push_back(s[i]);
        }
        else
        {
            ret.push_back(s[i] - s[i - k]);
        }
    }

    int max = *max_element(ret.begin(), ret.end());
    cout << max << '\n';
    return 0;
}