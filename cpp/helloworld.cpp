#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 크기가 3인 배열 생성
    int a[3] = {3, 1, 2};
    // vector 선언 후 배열의 값 순서대로 넣어줌
    vector<int> v;
    for (int i = 0; i < 3; i++)
        v.push_back(a[i]);
    // 순열뽑기
    do
    {
        // 순열을 뽑을 때마다 현재 상황을 출력
        for (auto i = v.begin(); i < v.end(); i++)
            cout << *i << " ";
        cout << "\n";
    } while (prev_permutation(v.begin(), v.end()));

    for (auto i = v.begin(); i < v.end(); i++)
        cout << *i << " ";
}