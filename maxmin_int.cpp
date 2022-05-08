#include <iostream>
using namespace std;


int main(){
  int n=0;
  int max=0;
  int min=2147483647;

  while ( cin >> n, n != -1){
    if (max < n){
      max = n;
    }
    if (min > n){
      min = n; 
    }
  }
  cout << max << ","<< min;
 
}