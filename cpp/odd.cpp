#include <iostream>
using namespace std;

int main()
{
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);
    int odd_sum, odd_min;
    odd_min = 101;
    odd_sum = 0;

    for (int i = 0; i < 7; i++)
    {
        int tmp;
        cin >> tmp;
        if (tmp % 2 == 1)
        {
            if (tmp < odd_min)
            {
                odd_min = tmp;
            }
            odd_sum += tmp;
        }
    }

    if (odd_sum)
    {
        cout << odd_sum << '\n';
        cout << odd_min << '\n';
    }
    else
    {
        cout << "-1\n";
    }

    return 0;
}