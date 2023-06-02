#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int miskaWon = 0, chrisWon = 0;
    while (t--)
    {
        int miska, chris;
        cin >> miska >> chris;
        if (miska > chris)
        {
            miskaWon++;
        }
        if (chris > miska)
        {
            chrisWon++;
        }
    }
    if(miskaWon > chrisWon){
        std::cout << "Miska";
    }
    return 0;
}