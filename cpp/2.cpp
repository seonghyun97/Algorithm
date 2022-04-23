#include <iostream>
using namespace std;
void good(int num)
{
    if (num == 0 || num == 1)
    {
        cout << num;
        return;
    }
    good(num / 2);
    cout << num % 2;
}
int main()
{
    int n = 0;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        good(i);
    }

    cout << '\n';
    return 0;
}
