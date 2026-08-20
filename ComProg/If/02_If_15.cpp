#include <iostream>
#include <cmath>
using namespace std;

int main() {
  string phone; cin >> phone;
  string yah = phone.substr(0,2);
  if ((yah == "06" || yah == "08" || yah == "09" ) && phone.length() == 10) {
      cout << "Mobile number";
  }
  else cout << "Not a mobile number";
}