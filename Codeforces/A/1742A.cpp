#include <bits/stdc++.h>
using namespace std;
int main()
{
    int numberOfTestCase, firstCase, secondCase, thirdCase;
    cin >> numberOfTestCase;
    for(int i = 0; i < numberOfTestCase; i++){
        cin >> firstCase >> secondCase >> thirdCase;
        if((firstCase + secondCase) == thirdCase){
            cout << "YES" <<endl;
        }
        else if((firstCase + thirdCase) == secondCase){
            cout << "YES" <<endl;
        }
        else if((thirdCase + secondCase) == firstCase){
            cout << "YES" <<endl;
        }
        else{
            cout << "NO" <<endl;
        }
    }
return 0;
}