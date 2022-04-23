#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int ans;
    cin >> ans;

    for (int i = 0; i < n - 1; i++)
    {
        int plus;
        cin >> plus;
        ans += plus - 1;
    }
    cout << ans << '\n';
}