// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int testCases, targetX, targetY, currentXAxix = 0, currentYAxis = 0, lengthOfLeg = 1;
    
//     cin >> testCases;
//     while (testCases--)
//     {
//         cin >> targetX >> targetY;
//         if (targetX < targetY)
//         {
//             int stepCount = 0;
//             while (currentXAxix != targetX){
//                 stepCount++;
//                 currentXAxix++;
//             }
//             stepCount = stepCount + (targetY / (stepCount +1));
//             cout << stepCount + 1<< endl;
//         }
//         else if(targetX > targetY){
//             int stepCount = 0;
//             while (currentYAxis != targetY){
//                 stepCount++;
//                 currentYAxis++;
//                 // cout << stepCount << ' ';
//             }
//             stepCount = stepCount + (targetX / (stepCount +1));
//             cout << stepCount + 1 << endl;
//         }
//         else if(targetX == targetY)
//         {
//             int stepCount = 0;
//             while (targetY--)
//             {
//                 stepCount++;
//             }
//             stepCount = (targetX / (stepCount +1)) + stepCount;
//             cout << stepCount + 1 << endl;
//         }
        
//     }
//     return 0;
// }
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int a, b;
//         cin >> a >> b;

//         if (a == b) {
//             cout << 0 << endl;  // already at the target cell
//             continue;  // move on to the next test case
//         }

//         if (a < b) {
//             swap(a, b);  // make sure a is always greater than or equal to b
//         }

//         int diff = a - b;

//         int m = ceil((-1.0 + sqrt(1 + 8 * diff)) / 2);  // compute the minimum leg length required
//         int total_moves = m;  // count the number of moves needed to increase leg length
//         int curr = m * (m + 1) / 2;  // current position

//         // check if we need to move left or right after reaching the correct height
//         if (curr - b >= diff) {
//             cout << total_moves + (curr - b - diff) << endl;
//         } else {
//             curr += m + 1;
//             total_moves++;
//             cout << total_moves + (b - curr) << endl;
//         }
//     }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b, m = 1, moves = 0, x = 0, y = 0;
        cin >> a >> b;
        while(x < a || y < b) {
            if(x + m <= a && y < x + m) {
                x += m;
            } else {
                m++;
                moves++;
                continue;
            }
            if(y + m <= b) {
                y += m;
            } else {
                m++;
                moves++;
                continue;
            }
            moves++;
        }
        cout << moves << endl;
    }
    return 0;
}
