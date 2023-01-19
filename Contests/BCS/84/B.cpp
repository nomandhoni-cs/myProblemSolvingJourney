#include <bits/stdc++.h>
using namespace std;
int main()
{
    string desiredName;
    string newName;
    string ch;
    string next;
    cin >> desiredName;
    for (int i = 0; i < desiredName.length(); i++)
    {
        ch = desiredName[i];
        next = desiredName[i + 1];
        if(ch == next){
            continue;
        }
        else
        {
            newName = newName + ch;
        }
    }
    cout << newName;
    return 0;
}