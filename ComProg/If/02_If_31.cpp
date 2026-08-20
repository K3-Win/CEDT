#include <iostream>
#include <cmath>
using namespace std;
int getday(int m, int y_be) {
    if (m == 4 || m == 6 || m == 9 || m == 11) return 30;
    if (m == 2) {
        int y_ad = y_be - 543; 
        if ((y_ad % 400 == 0) || (y_ad % 4 == 0 && y_ad % 100 != 0)) return 29;
        return 28;
    }
    return 31;
}

int main() {
    int d1, m1, y1, d2, m2, y2;
    cin >> d1 >> m1 >> y1 >> d2 >> m2 >> y2;
    int red = getday(m1, y1) - d1 + 1;
    for (int m = m1 + 1; m <= 12; m++) {
        red += getday(m, y1);
    }
    int black = (y2 - y1 - 1) * 365;
    int blue = d2 - 1;
    for (int m = 1; m < m2; m++) {
        blue += getday(m, y2);
    }
    int t = red + black + blue;
    double phys = sin(2.0 * M_PI * t / 23.0);
    double emo  = sin(2.0 * M_PI * t / 28.0);
    double intel = sin(2.0 * M_PI * t / 33.0);
    phys = round(phys * 100.0) / 100.0;
    emo = round(emo * 100.0) / 100.0;
    intel = round(intel * 100.0) / 100.0;
    cout << t << " " << phys << " " << emo << " " << intel;
}