#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // blank
        for (int j = 0; j < n - i; j++)
        {
            cout << ' ';
        }
        // star
        for (int k = 0; k < i; k++)
        {
            cout << '*' << ' ';
        }
        cout << '\n';
    }

    return 0;
}