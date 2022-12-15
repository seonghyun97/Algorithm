#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[9];
    int total = 0;
    int d;

    for (int i = 0; i < 9; i++)
    {
        cin >> a[i];
        total += a[i];
    }

    sort(a, a + 9);
    d = total - 100;

    for (int i = 0; i < 9; i++)
    {
        for (int j = i + 1; j < 9; j++)
        {
            if (a[i] + a[j] == d)
            {
                a[i] = -1;
                a[j] = -1;
                for (int i = 0; i < 9; i++)
                {
                    if (a[i] > 0)
                        cout << a[i] << "\n";
                }

                return 0;
            }
        }
    }
}