#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int start, end;
    cin >> start >> end;

    vector<int> v;

    for (int i = 1; i < 10002; i++)
    {
        for (int j = 0; j < i; j++)
        {
            v.push_back(i);
            if (v.size() == end)
            {
                break;
            }
        }
        if (v.size() == end)
        {
            break;
        }
    }

    int ans = 0;
    for (int i = start - 1; i < v.size(); i++)
    {
        ans += v[i];
    }

    cout << ans << '\n';

    return 0;
}
