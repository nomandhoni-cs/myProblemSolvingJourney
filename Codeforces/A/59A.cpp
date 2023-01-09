#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, upper = 0, lower = 0;
    string inputString;
    cin >> inputString;
    for (int i = 0; i < inputString.length(); i++)
    {
        int singleChar = inputString[i];
        if (singleChar >= 65 && singleChar <= 90)
        {
            upper++;
        }
        else
        {
            lower++;
        }
    }
    if (upper > lower)
    {
        std::transform(inputString.begin(), inputString.end(), inputString.begin(), ::toupper);
        cout << inputString;
    }
    else
    {
        std::transform(inputString.begin(), inputString.end(), inputString.begin(), ::tolower);
        cout << inputString;
    }
    return 0;
}