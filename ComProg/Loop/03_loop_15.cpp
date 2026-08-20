#include <iostream>
using namespace std;

int main() {
    string str; getline(cin,str);
    bool has = false;
    for (int i=0;i<str.length();i++) {
        if (str[i] == '(') {
            str[i] = '[';
            has = true;
        }
        else if (str[i] == ')') {
            str[i] = ']';
            has = true;
        }
        else if (str[i] == '[') {
            str[i] = '(';
            has = true;
        }
        else if (str[i] == ']') {
            str[i] = ')';
            has = true;
        }
    }
    if (has) {
        cout << str << endl;
    }
    else {
        cout << "no parentheses" << endl;
    }
}