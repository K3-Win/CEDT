#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double arr[4];
  for (int i=0;i<4;i++) {
    cin >> arr[i];
  }
  double mx = -999;
  double mn = 999;
  double sum = 0;
  for (int i=0;i<4;i++) {
    sum += arr[i];
    if (arr[i] > mx) mx = arr[i];
    if (arr[i] < mn) mn = arr[i];
  }
  cout << round((sum-mn-mx)/2 * 100.0)/100.0;
}