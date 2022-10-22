#include <bits/stdc++.h>
using namespace std;
int main()
{
    int luckyNumber, numberLength;
    cin >> luckyNumber;
    numberLength = to_string(luckyNumber).length();
    to_string(luckyNumber);
    for (int i = 0; i < numberLength; i++)
    {
    // numberLength = std::to_string(luckyNumber);
        cout << typeOf(luckyNumber);
    }
    
return 0;
}