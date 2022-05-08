#include <iostream>
using namespace std;
int n, i, j;

int main()
{
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = i; j < n; j++)
        {
            cout << "*" ;
        }

        for (j = i; j < 2 * i; j++)
            cout << j;

        for (j = 2 * i - 2; j >= i; j--)
            cout << j;
        for (j = i; j < n; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}
