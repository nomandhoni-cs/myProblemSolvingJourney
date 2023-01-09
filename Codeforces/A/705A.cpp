#include <bits/stdc++.h>
using namespace std;
int main()
{
    string hate = "I hate ";
    string love = "I love ";
    string conjunction = "that ";
    string lastWord = "it ";
    string output;
    int numberOfLayers;
    int count;
    cin >> numberOfLayers;
    count = numberOfLayers;
    for(int i = 1; i < count + 1; i++){
        if(i % 2 == 0 && numberOfLayers != 1){
            output = output + love + conjunction;
        }
        else if(i % 2 == 0 && numberOfLayers == 1){
            output = output + love;
        }
        else if(numberOfLayers != 1){
            output = output + hate + conjunction;
        }
        else{
            output = output + hate;
        }
            numberOfLayers--;
    }
    cout << output + lastWord;
return 0;
}
        // cout << " Nol is " << numberOfLayers <<"i is "<<i << endl;