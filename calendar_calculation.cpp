#include <iostream>
using namespace std;


int main(){
  int month,day, feb = 28,rday;
  cin >> month>>day;
  rday = day; 
   switch(month)
    {
        case 2:
            rday += 31;
            break;
        case 3:
            rday += 31+feb;
            break;
        case 4:
            rday += 31+feb+31;
            break;
        case 5:
            rday += 31+feb+31+30;
            break;
        case 6:
            rday += 31+feb+31+30+31;
            break;
        case 7:
            rday += 31+feb+31+30+31+30;
            break;
        case 8:
            rday += 31+feb+31+30+31+30+31;
            break;
        case 9:
            rday += 31+feb+31+30+31+30+31+31;
            break;
        case 10:
            rday += 31+feb+31+30+31+30+31+31+30;
            break;
        case 11:
            rday += 31+feb+31+30+31+30+31+31+30+31;
            break;
        case 12:
            rday += 31+feb+31+30+31+30+31+31+30+31+30;
            break;
    }
  cout << rday;
}
