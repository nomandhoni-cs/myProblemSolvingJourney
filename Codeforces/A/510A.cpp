#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, lineCount = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        lineCount++;
        if (lineCount % 2 != 0)
        {
            for (int l = 0; l < m; l++)
            {
                cout << '#';
            }
        }
        else
        {
            if (lineCount / 2 == 1)
            {
                for (int l = 0; l < m - 1; l++)
                {
                    cout << '.';
                }
                cout << '#';
            }
            else if ((lineCount / 2) % 2 != 0)
            {
                for (int l = 0; l < m - 1; l++)
                {
                    cout << '.';
                }
                cout << '#';
            }
            else if (lineCount % 4 == 0)
            {
                cout << '#';
                for (int l = 0; l < m - 1; l++)
                {
                    cout << '.';
                }
            }
            else
            {
                for (int l = 0; l < m - 1; l++)
                {
                    cout << '#';
                }
                cout << '.';
            }
        }
        cout << endl;
    }
    return 0;
}