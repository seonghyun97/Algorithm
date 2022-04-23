#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 3; i++)
    {
        int a, b, c, d, s;
        cin >> a >> b >> c >> d;
        s = a + b + c + d;
        if (s == 1)
        {
            cout << "C\n";
        }
        else if (s == 2)
        {
            cout << "B\n";
        }
        else if (s == 3)
        {
            cout << "A\n";
        }
        else if (s == 4)
        {
            cout << "E\n";
        }
        else
        {
            cout << "D\n";
        }
    }
    return 0;
}