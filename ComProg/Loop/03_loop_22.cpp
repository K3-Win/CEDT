#include <iostream>
using namespace std;
int main() {
    int n; cin >> n;
    int tmp = n;
    for (int i=2;i<=n/2;i++) {
        while (tmp%i==0) {
            cout << i;
            tmp/=i;
            if (tmp != 1) cout << "*";
        }
    }
}