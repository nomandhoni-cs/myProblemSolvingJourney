#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testCases;
    cin >> testCases;
    while (testCases--)
    {
        int input;
        cin >> input;
        set<int> count;
        for (int i = 1; (i * i) <= input; i++)
        {
            count.insert(i * i);
        }
        for (int i = 1; (i * i * i) <= input; i++)
        {
            count.insert(i * i * i);
        }
        cout << count.size() << endl;
    }
    return 0;
}