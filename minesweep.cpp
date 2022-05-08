#include <iostream>
using namespace std;

int n, k;
int a[15][15];
int i, j;

int check ( int x, int y){
  int bomb=0;
  for ( int i=-1;i<=1;i++) {
    for (int j=-1;j<=1;j++){
       if (!i&& !j) continue;
       if (a[x + i][y + j] == -1) bomb++;
    }
  }
  return bomb;
}

int main()
{
    cin >> n >> k;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= k; j++) {
            cin >> a[i][j];
            if (a[i][j]){
              a[i][j]=-1;
            }           
        }
    }

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= k; j++) {
          if (!a[i][j])
            a[i][j] = check(i,j);
        }
    }
  
   for (i = 1; i <= n; i++) {
        for (j = 1; j <= k; j++) {
            if (a[i][j] == -1)
                cout <<"# ";
            else if (a[i][j] == 0)
                cout <<". ";
            else
                cout << a[i][j] << " ";
        }
        cout <<"\n";
    }
}

