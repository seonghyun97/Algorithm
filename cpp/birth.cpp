#include <iostream>
#include <algorithm>
#include <limits>
using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int t;
    cin >> t;
    int dd, mm, yy;
    string name;
    int max_val = numeric_limits<int>::min();
    int min_val = numeric_limits<int>::max();
    string m_name, n_name;
    for (int i = 0; i < t; i++)
    {
        cin >> name >> dd >> mm >> yy;
        int val = (yy - 1990) * 365 + mm * 31 + dd;
        if (val > max_val)
        {
            max_val = val;
            m_name = name;
        }
        if (val < min_val)
        {
            min_val = val;
            n_name = name;
        }
    }
    cout << m_name << '\n';
    cout << n_name << '\n';
    return 0;
}