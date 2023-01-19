#include <iostream>
#include <string>
using namespace std;
int main()
{
    int inputLoop, firstInput, secondInput;
    string input, firstSlice, secondSlice;
    cin >> inputLoop;
    for(int i = 0; i< inputLoop; i++){
        cin >> input;
       firstSlice = input.substr(0, 1);
        secondSlice = input.substr(2,3);
       firstInput = stoi(firstSlice);
       secondInput = stoi(secondSlice);
        if( firstInput >= 0 && secondInput <= 9){
            cout << firstInput + secondInput << endl;
        }
    }
return 0;
}