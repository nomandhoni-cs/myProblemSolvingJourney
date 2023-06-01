#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int numberOfPeople = 0;
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a < b)
        {
            numberOfPeople++;
        }
        if (a < c)
        {
            numberOfPeople++;
        }
        if (a < d)
        {
            numberOfPeople++;
        }
        cout << numberOfPeople << endl;
    }

    return 0;
}