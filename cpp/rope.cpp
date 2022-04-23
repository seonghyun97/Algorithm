#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);
    int n;
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end());

    int max_value = -1;
    vector<int>::iterator iter;
    int i = 0;
    for (iter = v.begin(); iter != v.end(); iter++)
    {
        max_value = max(max_value, *iter * (n - i));
        i += 1;
    }

    cout << max_value << '\n';

    return 0;
}