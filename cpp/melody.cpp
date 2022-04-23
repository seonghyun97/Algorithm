#include <iostream>
using namespace std;

int main()
{

    int cnt = 0;
    int as[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int ds[] = {8, 7, 6, 5, 4, 3, 2, 1};
    for (int i = 0; i < 8; i++)
    {
        int tmp;
        cin >> tmp;
        if (as[i] == tmp)
        {
            cnt++;
        }
        if (ds[i] == tmp)
        {
            cnt--;
        }
    }

    if (cnt == 8)
    {
        cout << "ascending"
             << "\n";
    }
    else if (cnt == -8)
    {
        cout << "descending"
             << "\n";
    }
    else
    {
        cout << "mixed"
             << "\n";
    }
}
