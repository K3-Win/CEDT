#include <iostream>
using namespace std;

int main() {
    float p; cin >> p; float k=1,t=1;
    while (true) {
        t = t*(365-(k-1))/365;
        if (1-t < p) k++;
        else break;
    }
    cout << k;
}