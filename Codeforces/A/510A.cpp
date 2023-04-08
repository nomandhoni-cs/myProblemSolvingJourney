#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, lineCount = 0;
    cin >> n >> m;
    // Here n is the number of line in the table
    // Loop is running for every line
    for (int i = 0; i < n; i++)
    {
        lineCount++;
        // Check the current line is even or odd, if odd fill the line with #####
        if (lineCount % 2 != 0)
        {
            for (int l = 0; l < m; l++)
            {
                cout << '#';
            }
        }
        // If line number is even then apply below condition
        else
        {
            // Check if the line number is even but not 4, 8, 12, 16 ....
            // Fill with ...... first then add a # at last
            if ((lineCount / 2) % 2 != 0)
            {
                for (int l = 0; l < m - 1; l++)
                {
                    cout << '.';
                }
                cout << '#';
            }
            // If line number is 4, 8, 12 .... then fill with #........
            else
            {
                cout << '#';
                for (int l = 0; l < m - 1; l++)
                {
                    cout << '.';
                }
            }
        }
        cout << endl;
    }
    return 0;
}