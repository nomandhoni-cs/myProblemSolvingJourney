#include <bits/stdc++.h>
using namespace std;
int main()
{
    int numberOfRooms, currentlyLiving, canLive, count = 0, differences;
    cin >> numberOfRooms;
    for(int i = 0; i < numberOfRooms; i++){
        cin >> currentlyLiving >> canLive;
        differences = (canLive - currentlyLiving);
        if(differences >= 2){
            count++;
        }
    }
    if(count > 0){
    cout << count;
    }else{
        cout << count;
    }
return 0;
}