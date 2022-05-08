#include <iostream>

int main(){
    int year; 
    bool x; 
  while( x != 1 ){
      std::cin >> year;
  if (year % 4 == 0 & year % 100 != 0 || year % 400 == 0)  {  
    x=1;
    std::cout << "leap year";
 }
  else 
  {
    x=0;
    std :: cout << "non leap year";
  }
  }
   return 0;
}