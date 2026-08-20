#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int d,m,y; cin >> d>>m >>y;
  y -= 543;
  int ans = d;
  for (int i=m-1;i>=1;i--) {
    int n = 31;
    if (i==4 || i == 6 || i == 9 || i==11) {
        n=30;
    }
    else {
          if (i==2) {
            n=28;
            if (y%400 == 0) n =29;
            if (y%4==0 && y %100 != 0) n = 29;
            }
        }
    ans += n;
  }
  cout << ans;
}
