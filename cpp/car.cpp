#include <iostream>
using namespace std;

int main()
{
    int d;
    cin >> d;

    int cnt = 0;
    for (int i = 0, t; i < 5; i++)
    {
        cin >> t;
        if (d == t)
            cnt++;
    }

    cout << cnt << '\n';

    return 0;
}