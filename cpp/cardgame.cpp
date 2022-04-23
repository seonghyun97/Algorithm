#include <iostream>
using namespace std;

int main()
{
    int s = 0;
    for (int i = 0; i < 5; i++)
    {
        int tmp;
        cin >> tmp;
        s += tmp;
    }
    cout << s << '\n';
}