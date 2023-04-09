#include <bits/stdc++.h>
using namespace std;
int main()
{
    int numberOfInputs, firstInput, secondInput;
    cin >> numberOfInputs;
    for (int i = 0; i < numberOfInputs; i++)
    {
        cin >> firstInput >> secondInput;
        if ((firstInput / secondInput) != 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}