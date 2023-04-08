#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, a;
    cin >> n >> m >> a;
    if(((n+1) * (m+1)) == (a*a)*4){
        cout << a;
    }
    else if(((n+1) * (m+1)) >= (a*a)*4){
        cout << a+1;
    }else{
        cout << a;
    }
return 0;
}