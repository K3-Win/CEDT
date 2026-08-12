#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int xe, ye, re, rp, xm, ym; cin>>xe>>ye>>re>>rp>>xm>>ym;
    double c = re-rp;
    double C = sqrt(pow(xe-xm,2) + pow(ye-ym,2));
    //cout << c/C << endl;
    double A = xm-xe;
    double B = ym-ye;
    double a = A*(c/C);
    double b = B*(c/C);
    cout << round(a+xe) << " " << round(b+ye);
}