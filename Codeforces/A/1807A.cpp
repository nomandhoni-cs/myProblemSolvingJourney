#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testCases, first, second, third;
    cin >> testCases;
    for (int i = 0; i < testCases; i++)
    {
        cin >> first >> second >> third;
        if((first + second) == third){
            cout << '+' << endl;
        }else cout << '-'<< endl;
    }
    
return 0;
}