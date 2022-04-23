#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int a[3];
    int one, two, three;
    cin >> one >> two >> three;
    a[0] = one;
    a[1] = two;
    a[2] = three;
    sort(a, a + 3);

    for (int i = 0; i < 3; i++)
    {
        cout << a[i] << ' ';
    }
    cout << '\n';

    return 0;
}