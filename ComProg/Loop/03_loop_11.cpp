#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int cnt = 0;
    double sum = 0;
    double x;
    while (cin >> x) {
        if (x == -1) break;
        sum += x;
        cnt++;
    }
    cout << round(sum/cnt * 100.0)/100.0;
}