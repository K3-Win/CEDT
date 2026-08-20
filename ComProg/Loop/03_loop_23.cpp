#include <iostream>
using namespace std;

int main() {
    string str; cin >> str;
    int k; cin >> k;
    string ans = "";
    for (int i=0;i<str.length();i++) {
        bool correct = true;
        string temp = "";
        int cnt = 0;
        for (int j=i;j<str.length();j++) {
            if (str[j] == str[i]) {
                cnt++;
                temp += str[j];
            }
            else break;
        }
        //cout << temp << endl;
        if (cnt < k) ans += temp;
        i += cnt-1;
    }
    cout << ans;
}