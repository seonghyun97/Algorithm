#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    for (int i = n; i > 0; i--)
    {
        for (int k = 0; k < n - i; k++)
        {
            cout << ' ';
        }
        for (int j = i; j > 0; j--)
        {
            cout << '*';
        }
        cout << '\n';
    }

    return 0;
}