#include <iostream>
using namespace std;
int cal (string id) {
    int sum = 0;
    for (int i=0;i<12;i++) {
        sum += (13-i)*(id[i]-'0');
    }
    sum = (11-sum%11)%10;
    return sum;
}
int main() {
    string id; cin >> id;
    char first = id[0];
    string second = id.substr(1,4);
    string third = id.substr(5,5);
    string forth = id.substr(10,2);
    int last = cal(id);
    cout << first << '-' << second << '-' << third << '-' << forth << '-' << last;
    return 0;
}