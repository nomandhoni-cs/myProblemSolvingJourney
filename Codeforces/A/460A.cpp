#include <bits/stdc++.h>
using namespace std;
int main()
{
    int initailSocks, dayGap;
    cin >> initailSocks >> dayGap;
    int totalDays = initailSocks;
    while(1)
    {
        if (initailSocks / dayGap == 0)
        {
            break;
        }
        else
        {
            totalDays = totalDays + (initailSocks / dayGap);
            initailSocks = (initailSocks % dayGap) + (initailSocks / dayGap);
        }
    }
    cout << totalDays;
}
// purchaseDays = initailSocks / dayGap;
// int totalDays = purchaseDays + initailSocks;
// if(totalDays % 2 == 0 && totalDays % dayGap == 0){
// cout << totalDays + (totalDays % dayGap);
// }else cout << totalDays;