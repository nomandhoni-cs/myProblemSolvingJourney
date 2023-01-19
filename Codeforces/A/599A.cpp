#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int distanceFromFirstShop, distanceFromSecondShop, distanceBetweenShop;
    cin >> distanceFromFirstShop >> distanceFromSecondShop >> distanceBetweenShop;
    if (distanceFromFirstShop > distanceBetweenShop)
    {
        cout << ((distanceFromSecondShop + distanceBetweenShop) * 2);
    }
    else if (distanceBetweenShop < distanceFromSecondShop)
    {
        cout << ((distanceFromFirstShop + distanceBetweenShop) * 2);
    }
    else if (distanceFromFirstShop == distanceBetweenShop && distanceBetweenShop == distanceFromSecondShop)
    {
        cout << distanceFromFirstShop + distanceBetweenShop + distanceFromSecondShop;
    }
    else
    {
        cout << (distanceFromFirstShop * 2) + (distanceFromSecondShop * 2);
    }
    return 0;
}