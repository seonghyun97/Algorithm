#include <bits/stdc++.h>
#define For(x, n) for (int x = 0; x < n; x++)
using namespace std;

int a[26];
int n;

int main()
{
    cin >> n;

    For(x, n)
    {
        string s;
        cin >> s;
        a[s[0] - 97] += 1;
    }
    int m = *max_element(begin(a), end(a));
    if (m < 5)
    {
        cout << "PREDAJA" << '\n';
        return 0;
    }

    For(i, 26)
    {
        if (a[i] >= 5)
            cout << char(i + 97);
    }
    cout << '\n';
    return 0;
}