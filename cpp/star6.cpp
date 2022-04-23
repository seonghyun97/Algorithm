#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = n; i >= 1; i--)
    {
        // blank
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j < 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    for (int i = 2; i <= n; i++)
    {
        // blank
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j < 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}