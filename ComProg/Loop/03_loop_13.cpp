#include <iostream>
using namespace std;

int main() {
    string target; cin >> target;
    int cnt = 0;
    while (true) {
        string word; cin >> word;
        if (word[word.length()-1 == '.']) break;
        if (word == target) cnt++;
        else if (word[0] == '"' || word[0] == '(' || word[0] == ',') {
            string word2 = word.substr(1,word.length()-2);
            if (word2 == target) cnt++;
        }
    }
    cout << cnt;
}