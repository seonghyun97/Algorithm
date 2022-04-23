#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        int x, y;
        cin >> x >> y;
        cout << "Case " << i << ": " << x + y << '\n';
    }
}