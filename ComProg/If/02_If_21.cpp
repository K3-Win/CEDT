#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double num; cin >> num;
  if (num >= 1000000000) {
    if (num/1000000000 >10) cout << round(num/1e9);
    else cout << round(num/1e9 * 10.0)/10; 
    cout << "B";
  }
  else if (num >= 1000000) {
    if (num/10000000 > 10) cout << round(num/1e6);
    else cout << round(num/1e6 * 10.0)/10.0;
    cout << "M";
  }
  else if (num >= 1000) {
    if (num/1000 > 10) cout << round(num/1e3);
    else cout << round(num/1e3 * 10.0)/10.0;
    cout << "K";
  }
  else {
    if (num > 10) cout << round(num);
    else  cout << round(num*10.0)/10.0;
  }
}