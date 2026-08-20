#include <iostream>
using namespace std;

int main() {
    string str; cin >> str;
    for (int i=0;i<str.length();i++) {
        cout << str[i] << " ";
        int cnt = 0;
        for (int j=i;j<str.length();j++) {
            if (str[j] == str[i]) {
                cnt++;
            }
            else break;
        }
        cout << cnt << " ";
        i += cnt-1;
    }
}