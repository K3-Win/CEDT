#include <iostream>
#include <string>
using namespace std;

int main() {
    string i1, i2;
    double g1, g2;
    char p1, a1, b1, p2, a2, b2;

    cin >> i1 >> g1 >> p1 >> a1 >> b1;
    cin >> i2 >> g2 >> p2 >> a2 >> b2;
    bool k1 = (p1 == 'A' && a1 <= 'C' && b1 <= 'C');
    bool k2 = (p2 == 'A' && a2 <= 'C' && b2 <= 'C');

    if (!k1 && !k2) cout << "None";
    else if (k1 && !k2) cout << i1;
    else if (!k1 && k2) cout << i2;
    else {
        if (g1 > g2) cout << i1;
        else if (g2 > g1) cout << i2;
        else if (a1 < a2) cout << i1;
        else if (a2 < a1) cout << i2;
        else if (b1 < b2) cout << i1;
        else if (b2 < b1) cout << i2;
        else cout << "Both";
    }
}