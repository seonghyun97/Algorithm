#include <iostream>
using namespace std;

int main()
{
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);

    int n, ans, plus;
    ans = 0;
    plus = 1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int data;
        cin >> data;
        if (data)
        {
            ans += plus;
            plus += 1;
        }
        else
        {
            plus = 1;
        }
    }
    cout << ans << '\n';
    return 0;
}