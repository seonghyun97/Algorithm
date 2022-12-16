#include <bits/stdc++.h>
using namespace std;
string s;
string ret;

int main()
{
    getline(cin, s);

    for (char c : s)
    {
        if (c == ' ' || isdigit(c))
            ret += c;
        else
        {
            int n_c = c + 13;
            if (isupper(c))
            {
                if (90 < n_c)
                    ret += (n_c - 26);
                else
                    ret += n_c;
            }
            else
            {
                if (122 < n_c)
                    ret += (n_c - 26);
                else
                    ret += n_c;
            }
        }
    }
    cout << ret << '\n';
}