#include <bits/stdc++.h>
using namespace std;
int main()
{
    int numberOfOpinion, count = 0;
    cin >> numberOfOpinion;
    int arrayOfOpinions[numberOfOpinion];
    for(int i = 0; i < numberOfOpinion; i++){
        cin >> arrayOfOpinions[i];
        if(arrayOfOpinions[i] == 1){
            count ++;
        }
    }
    if( count >= 1 ){
        cout << "HARD";
    }
    else{
        cout <<"EASY";
    }
return 0;
}