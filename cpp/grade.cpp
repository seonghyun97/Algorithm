#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;

int main()
{
    int t; //학기의 수 입력
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n; //과목의 수 입력
        cin >> n;
        int total_grade;
        float total_gpa;
        total_gpa = 0;
        total_grade = 0;
        for (int j = 0; j < n; j++)
        {
            int tmp_grade;
            float tmp_gpa;
            cin >> tmp_grade >> tmp_gpa;
            total_grade += tmp_grade;
            total_gpa += tmp_gpa * tmp_grade;
        }
        printf("%d %.1f\n", total_grade, total_gpa / total_grade);
    }
    return 0;
}
