#include <iostream>
#include <algorithm>

using namespace std;
int main() {
    int n,k; cin >> n >> k;
    if (n%2==0) {
        int s,t; cin >> s >> t;
        int x =s;
        int y = t;
        if (s > t) {
            x = s-t;
        }
        else if (s < t) {
            y = 2*(t-s);
        }
        if (x+y>k) {
            swap(x,y);
            x = y + s*s;
        }
        cout << x << " " << y;
    }
    else {
        int sumA=0,sumB=0,sumC=0,m=0;
        while(m<k) {
            int a,b,c; cin >> a >> b >> c;
            if (a == b) {
                if (a==b && b==c) {
                    if (a+b > k) {
                        sumA++;
                        sumB+=2;
                        sumC-=3;
                    }
                    else {
                        sumA-=3;
                        sumB-=2;
                        sumC++;
                    }
                    
                }
                else {
                    sumA+=2;
                    sumB-=3;
                }
            }
            m++;
        }
        cout << sumA << " " << sumB << " " << sumC;
    }
}