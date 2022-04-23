#include <iostream>
#include <string>
using namespace std;

int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int n_h, n_m, n_s, n_total;
    int s_h, s_m, s_s, s_total;
    int a_h, a_m, a_s;
    string z("0");
    char clone;

    cin >> n_h >> clone >> n_m >> clone >> n_s;
    cin >> s_h >> clone >> s_m >> clone >> s_s;

    n_total = n_h * 60 * 60 + n_m * 60 + n_s;
    s_total = s_h * 60 * 60 + s_m * 60 + s_s;

    //시작시간이 현재시간보다 클 때
    if (s_total > n_total)
    {
        int tmp = s_total - n_total;
        a_h = tmp / (60 * 60);
        tmp -= a_h * 60 * 60;
        if (a_h < 10)
        {
            cout << z << a_h << ":";
        }
        else
        {
            cout << a_h << ":";
        }
        a_m = tmp / 60;
        tmp -= a_m * 60;
        if (a_m < 10)
        {
            cout << z << a_m << ":";
        }
        else
        {
            cout << a_m << ":";
        }
        a_s = tmp;
        if (a_s < 10)
        {
            cout << z << a_s << "\n";
        }
        else
        {
            cout << a_s << "\n";
        }
    }
    //시작시간이 현재시간보다 작을 때
    else
    {
        s_total += 60 * 60 * 24;
        int tmp = s_total - n_total;
        a_h = tmp / (60 * 60);
        tmp -= a_h * 60 * 60;
        if (a_h < 10)
        {
            cout << z << a_h << ":";
        }
        else
        {
            cout << a_h << ":";
        }
        a_m = tmp / 60;
        tmp -= a_m * 60;
        if (a_m < 10)
        {
            cout << z << a_m << ":";
        }
        else
        {
            cout << a_m << ":";
        }
        a_s = tmp;
        if (a_s < 10)
        {
            cout << z << a_s << "\n";
        }
        else
        {
            cout << a_s << "\n";
        }
    }

    return 0;
}