#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int n; cin >> n;
  if (n < 0) {
      cout << "negative";
  }
  else if (n == 0) cout << "zero";
  else cout << "positive";
  cout << '\n';
  if (n%2 == 0) {
      cout << "even";
  }
  else cout << "odd";
}