#include <iostream>
using namespace std;
int main()
{
    int n, petya, Vasya, Tonya, number(0);
    cin >> n;
    while (n--)
    {
        cin >> petya >> Vasya >> Tonya;
        if (petya + Vasya + Tonya >= 2)
        {
            number++;
        }
    }
    cout << number << endl;
    return 0;
}