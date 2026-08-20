#include <iostream>
using namespace std;

int main() {
    string ans; getline(cin,ans);
    string sol; getline(cin,sol);
    if (ans.length() != sol.length()) {
        cout << "Incomplete answer";
        return 0;
    } 
    int score = 0;
    for (int i=0;i<ans.length();i++) {
        if (ans[i] == sol[i]) score++;
    }
    cout << score;
}