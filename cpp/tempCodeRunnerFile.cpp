#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }

    int max_value = -1;
    for (int i = 0; i < n; i++)
    {
        max_value = max(max_value, v[i] * (n - i));
    }

    cout << max_value << '\n';

    return 0;
}