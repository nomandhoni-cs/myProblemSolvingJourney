#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testCases;
    cin >> testCases;
    while (testCases--)
    {
        int numberOfPairs;
        cin >> numberOfPairs;
        int even = 0, odd = 0;
        for (int i = 0; i < (numberOfPairs * 2); i++)
        {
            int input;
            cin >> input;
            if (input % 2 == 0)
                even++;
            else
                odd++;
        }
        if (even > odd || odd > even)
        {
            cout << "No" << endl;
        }
        else
        {
            cout <<"Yes"<< endl;
        }
    }
    return 0;
}