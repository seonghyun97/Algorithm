#include <iostream>
using namespace std;

int main()
{
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int ans = 0;

        for (int j = 0; j < n; j++)
        {
            int tmp;
            cin >> tmp;
            ans += tmp;
        }
        cout << ans << '\n';
    }
    return 0;
}