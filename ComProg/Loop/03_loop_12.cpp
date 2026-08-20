#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a; cin >> a;
    double l=0; double u=a;
    double x = (l+u)/2;
    while (abs(a-pow(10,x)) > 1e-10*max(a,pow(10,x))) {
        if (pow(10,x) > a) u = x;
        else l = x;
        x = (l+u)/2;
    }
    cout << x;
}