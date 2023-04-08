#include <bits/stdc++.h>
using namespace std;
int main()
{
    int numbersOfCitizens, amountOfBerles, hadToSpend = 0;
    vector<int>numberOfSlots;
    cin >> numbersOfCitizens;
    for (int i = 0; i < numbersOfCitizens; i++)
    {
        cin >> amountOfBerles;
        numberOfSlots.push_back(amountOfBerles);
    }
    int maxAmount = *max_element(numberOfSlots.begin(), numberOfSlots.end());
    for (int j = 0; j < numberOfSlots.size(); j++)
    {
        int difference = maxAmount - numberOfSlots[j];
        hadToSpend = hadToSpend + difference;
    }
    cout << hadToSpend;
    
return 0;
}