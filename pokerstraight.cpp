#include <iostream>
using namespace std;

int a[15];
int i, t, check = 0;
int main()
{
    for (i = 1; i <= 5; i++)
    {
        cin >> t;
        a[t]++;
    }
    t = 1, i = 1;
    while (i < 10)
    {
        if (a[i] && a[i + t])
        {
            check = 1;
            while (a[i] && a[i + t] && t < 5)
                t++;
        }
        i++;
        if (check == 0)
            continue;
        if (t == 5)
        {
            cout << "a straight\n";
            return 0;
        }
        }
    cout << "not a straight\n";
}