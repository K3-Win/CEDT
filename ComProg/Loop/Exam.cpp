#include <iostream>
using namespace std;
int main() {
    unsigned long long n; cin >> n;
    int d = 2;
    if (n <2) {
        cout << "No prime factors for numbers less than 2";
        return 0;
    }
    while (n>1) {
        if (d*d > n) {
            cout << n;
            break;
        }
        while (n%d==0) {
            cout << d;
            n/=d;
            if (n != 1) cout << "*";
        }
        d++;
    }

}