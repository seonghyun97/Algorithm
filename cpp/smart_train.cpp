#include <iostream>
using namespace std;

int main()
{
    int max_people, now_people, first_in, first_out;
    cin >> first_out >> first_in;
    max_people = first_in - first_out;
    now_people = max_people;
    for (int i = 0; i < 9; i++)
    {
        int out, in;
        cin >> out >> in;
        now_people += (in - out);
        max_people = max(now_people, max_people);
    }
    cout << max_people << '\n';
}