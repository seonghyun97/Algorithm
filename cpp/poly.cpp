#include <iostream>
using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int v, e;
        cin >> v >> e;
        cout << e - v + 2 << '\n';
    }
}