#include <iostream>
using namespace std;

int main() {
    int h1, m1, s1, h2, m2, s2;
    cin >> h1 >> m1 >> s1;
    cin >> h2 >> m2 >> s2;
    int t1 = h1 * 3600 + m1 * 60 + s1;
    int t2 = h2 * 3600 + m2 * 60 + s2;
    int ds = (t2 - t1 + 86400) % 86400;
    int dh = ds / 3600;
    ds %= 3600;
    int dm = ds / 60;
    ds %= 60;
    cout << dh << ':' << dm << ':' << ds << endl;
}