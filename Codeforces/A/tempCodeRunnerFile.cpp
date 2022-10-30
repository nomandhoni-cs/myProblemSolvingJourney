#include <bits/stdc++.h>
using namespace std;
int main()
{
long long slice; 
cin >> slice;
if  (slice > 0){
    if( slice % 2 == 0){
    cout << (slice + 1);
    }
    else{
        cout << ((slice + 1) / 2);
    }
}
else{
    cout << 0;
}
return 0;
}