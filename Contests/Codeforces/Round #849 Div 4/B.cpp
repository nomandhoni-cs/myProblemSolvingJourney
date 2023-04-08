#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t; // number of test cases

    // loop for each test case
    while (t--) {
        int n;
        cin >> n; // length of the string
        string s;
        cin >> s; // the string s

        int x = 0, y = 0; // initial positions

        // loop through the string s
        for (int i = 0; i < n; i++) {
            // move left if the current character is 'L'
            if (s[i] == 'L') {
                x--;
            }
            // move right if the current character is 'R'
            else if (s[i] == 'R') {
                x++;
            }
            // move up if the current character is 'U'
            else if (s[i] == 'U') {
                y++;
            }
            // move down if the current character is 'D'
            else if (s[i] == 'D') {
                y--;
            }

            // check if Alperen passes the candy
            if (x == 1 && y == 1) {
                cout << "YES" << endl;
                break;
            }
        }

        // if Alperen did not pass the candy
        if (x != 1 || y != 1) {
            cout << "NO" << endl;
        }
    }

    return 0;
}
