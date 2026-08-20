#include <iostream>
#include <cctype>
#include <string>
using namespace std;
bool isNum(const string& s) {
if (s.empty()) return false;
for (char c : s) {
if (!isdigit(c)) return false;
}
return true;
}

int main() {
    string str;
  cin >> str;
  if (!isNum(str)) {
  cout << "Error";
  return 0;
  }
  int num = stoi(str);
  if ((num >= 20 && num <= 40) || (str == "01") || (str == "02") || (num == 51) || (num == 53) || (num == 55) || (num ==58) )  {
    cout << "OK";
    return 0;
  }
  cout << "Error";
  return 0;
}