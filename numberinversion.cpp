#include <iostream>
using namespace std;

int a[21];
int n;
int inversion(int a[], int n)
{
    int cnt = 0;
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i < j && a[i] > a[j])
                cnt++;
        }
    }
    return cnt;
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    cin >> a[i];
    cout << inversion(a, n);
}