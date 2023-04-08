// #include <iostream>
// #include <string>

// using namespace std;

// int main() {
//     int t;
//     cin >> t;
// while (t--) {
//     int n;
//     cin >> n;
//     string s;
//     cin >> s;
//     int left = 0, right = n - 1;
//     while (left <= right && (s[left] == '0' || s[right] == '1')) {
//         if (s[left] == '0') {
//             left++;
//         }
//         if (s[right] == '1') {
//             right--;
//         }
//     }
//     cout << (right - left + 1) << endl;
// }
// return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int t, n;
string s;

int main() {
cin >> t;
while (t--) {
cin >> n >> s;
int l = 0, r = n - 1;
while (l < n && s[l] == '0') l++;
while (r >= 0 && s[r] == '1') r--;
cout << max(0, r - l + 1) << endl;
}
return 0;
}