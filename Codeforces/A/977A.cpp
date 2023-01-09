#include <bits/stdc++.h>
using namespace std;
int main()
{
    int firstInput, secondInput;
    cin >> firstInput >> secondInput;
    for (int i = 0; i < secondInput; i++)
    {
        if(firstInput % 10 == 0){
            firstInput = firstInput / 10;
        }
        else{
            firstInput--;
        }
    }
cout << firstInput;
    
return 0;
}