#include <iostream>
using namespace std;
int main() {
   string str;
   while (cin >> str) {
        bool Scorrect = false;
        bool yai = false;
        bool lek = false;
        bool num = false;
        bool alp = false;
        if (str.length() >= 12) {
                Scorrect = true;
                break;
        } 
        for (int i='a';i<='z';i++) {
            if (str.find(i) != string::npos) {
                lek = true;
                break;
            }
        }
        for (int i='A';i<='Z';i++) {
            if (str.find(i) != string::npos) {
                yai = true;
                break;
            }
        }
        for (int i='0';i<='9';i++) {
            if (str.find(i) == string::npos) {
                num = true;
                break;
            }
        }
        for (int i=0;i<str.length();i++) {
            if (str[i] == '!' || str[i] == '@' || str[i] == '#' || str[i] == '$' || str[i] == '%' || str[i] == '^' || str[i] == '&' || str[i] == '*' || str[i] == '(' || str[i] == ')' || str[i] == '-' || str[i] == '+') {
                alp = true;
                break;
            }
        }
        cout << yai << " " << lek << " " << num << endl;
        if (num && lek && yai && alp && Scorrect) cout << ">> Strong";
        cout << '\n';
    }
}