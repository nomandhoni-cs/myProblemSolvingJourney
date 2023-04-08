#include <bits/stdc++.h>
using namespace std;
int main()
{
    int numbersOfCitizens, amountOfBerles, hadToSpend = 0;
    int maxAmount = 0;
    cin >> numbersOfCitizens;
    int numberOfSlots[numbersOfCitizens];
    for (int i = 0; i < numbersOfCitizens; i++)
    {
        cin >> amountOfBerles;
        numberOfSlots[i] = amountOfBerles;
    }
    for (int j = 0; j < numbersOfCitizens; j++)
    {
        if (maxAmount < numberOfSlots[j])
        {
            maxAmount = numberOfSlots[j];
        }
        else
            continue;
    }
    for (int k = 0; k < numbersOfCitizens; k++)
    {
        int difference = maxAmount - numberOfSlots[k];
        hadToSpend = hadToSpend + difference;
    }
    cout << hadToSpend;

    return 0;
}