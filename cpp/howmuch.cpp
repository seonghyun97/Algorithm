#include <iostream>
using namespace std;

int main()
{

    // test case
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        // car
        int s;
        cin >> s;
        // option
        int n;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            int q, p;
            cin >> q >> p;
            s += q * p;
        }
        cout << s << '\n';
    }
}