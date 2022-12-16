#include <bits/stdc++.h>
using namespace std;
string s;

int main()
{
    cin >> s;
    int a = s.length() / 2;
    for (int i = 0; i < a; i++)
    {
        if (s[i] != s[s.length() - 1 - i])
        {
            cout << 0 << "\n";
            return 0;
        }
    }
    cout << 1 << "\n";
    return 0;
}