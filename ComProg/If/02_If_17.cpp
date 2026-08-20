#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int gam; cin >>gam;
  if (gam > 2000) cout << "Reject";
  else if (gam > 1000) cout << 58;
  else if (gam >500) cout << 38;
  else if (gam> 250) cout << 28;
  else if (gam > 100) cout << 22;
  else cout << 18;
}