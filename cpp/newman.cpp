#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(0);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> d;
        for (int i = 0; i < n; i++)
        {
            int score1, score2;
            cin >> score1 >> score2;
            d.push_back({score1, score2});
        }
        sort(d.begin(), d.end());
        vector<int> answer;
        answer.push_back(n + 1);
        for (int i = 0; i < n; i++)
        {
            if (answer.back() > d[i].second)
            {
                answer.push_back(d[i].second);
            }
        }
        cout << answer.size() - 1 << '\n';
    }
    return 0;
}