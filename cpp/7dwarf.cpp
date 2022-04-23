#include <iostream>
#include <algorithm>

using namespace std;

int print(int not1, int not2, int arr[])
{
    for (int i = 0; i < 9; i++)
    {
        if (i != not1 && i != not2)
            cout << arr[i] << '\n';
    }
    return 0;
};

int main()
{
    int h[9], total_h = 0;
    // 난쟁이 입력받기
    for (int i = 0; i < 9; i++)
    {
        cin >> h[i];
        total_h += h[i];
    }
    sort(h, h + 9);

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            int tmp = 0;

            if (i != j)
                tmp = total_h - h[i] - h[j];

            if (tmp == 100)
            {
                print(i, j, h);
                return 0;
            }
        }
    }
}