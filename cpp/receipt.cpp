#include <iostream>

using namespace std;

int main()
{
    int total, subtotal, tmp;
    subtotal = 0;
    cin >> total;

    for (int i = 0; i < 9; i++)
    {
        cin >> tmp;
        subtotal += tmp;
    }

    cout << total - subtotal << '\n';

    return 0;
}