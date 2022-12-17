#include <bits/stdc++.h>
using namespace std;
#define For(i, n) for (int i = 0; i < n; i++)
int n;
string pattern;

int main()
{
    cin >> n;
    cin >> pattern;

    For(i, n)
    {
        // 문장 입력
        string tmp;
        cin >> tmp;
        // 현재상황 flag 0 no problem, 1 problem;
        int flag = 0;
        int star = pattern.find('*');

        // 앞단 확인
        for (int i = 0; i < star; i++)
        {
            // pattern과 유사한지 검사
            if (tmp[i] != pattern[i])
            {
                cout << "NE" << '\n';
                flag = 1;
                break;
            }
            else
            {
                // 뒤에서 읽었을 때 중복으로 읽히는 것 방지
                tmp[i] = '.';
            }
        }
        // 거꾸로 뒤집어서 검사
        reverse(begin(tmp), end(tmp));
        reverse(begin(pattern), end(pattern));
        star = pattern.find('*');
        // 뒷단 확인
        if (flag == 0)
        {
            for (int i = 0; i < star; i++)
            {
                if (tmp[i] != pattern[i])
                {
                    cout << "NE" << '\n';
                    flag = 1;
                    break;
                }
            }
        }

        // 아무 문제 없었다면 DA 출력
        if (flag == 0)
        {
            cout << "DA" << '\n';
        }

        // pattern 원상복구
        reverse(begin(pattern), end(pattern));
    }

    return 0;
}