#include <iostream>
using namespace std;

int main()
{
    int max_people, now_people;
    max_people = -1;
    now_people = 0;

    for (int i = 0; i < 4; i++)
    {
        int plus, minus;
        cin >> minus >> plus;
        now_people -= minus;
        now_people += plus;

        if (now_people > max_people)
        {
            max_people = now_people;
        }
    }
    cout << max_people << '\n';
    return 0;
}