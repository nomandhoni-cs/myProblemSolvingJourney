#include <bits/stdc++.h>
using namespace std;
int main()
{
    int singleInput;
    cin >> singleInput; 
    cout << singleInput / 2 << endl;
    if (singleInput % 2 == 0)
    {
        for (int i = 0; i < (singleInput / 2); i++)
        {
            cout << (singleInput / (singleInput / 2)) << ' ';
        }
    }
    else
    {
        for (int i = 0; i < (singleInput / 2) - 1; i++)
        {
            cout << (singleInput / (singleInput / 2))<< ' ';
        }
        cout << 3;
    }
    return 0;
}
// 2 <= singleInput &&