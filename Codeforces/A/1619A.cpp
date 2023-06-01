#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testCases;
    cin >> testCases;
    while (testCases--)
    {
        string inputString;
        cin >> inputString;
        int count = 0;
        string output;
        if (inputString.length() > 1 && (inputString.length()%2 == 0))
        {
            for (int i = 0; i < (inputString.length() / 2); i++)
            {
                if (inputString[i] == inputString[(inputString.length() / 2) + i])
                    count++;
                else
                    continue;
            }
            output = count == (inputString.length() / 2) ? "YES" : "NO";
            cout << output << endl;
        }else cout << "NO" << endl;
    }
    return 0;
}