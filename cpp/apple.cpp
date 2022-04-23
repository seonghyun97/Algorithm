#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        int student, apple;
        cin >> student >> apple;
        ans += apple % student;
    }

    cout << ans << '\n';
}