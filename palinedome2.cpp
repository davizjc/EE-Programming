#include <iostream>
#include <string.h>
using namespace std;

int ispalindrome (char str[]){
  int first = 0; 
  int last = strlen(str)-1;
  while ( first < last) {
    if (str[first] != str[last]) 
      return 0;
      first++;
      last--;
  }
  return 1;
}

int main()
{
  char *arr;
  char n;
while(cin >> n , n != '.') {}
  if (ispalindrome(arr)) {
    cout << " palinedrome \n";
  }
  else {
    cout << " not palindrome \n";
  }
     
    