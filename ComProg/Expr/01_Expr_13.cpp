#include <iostream>
#include <cmath>
#include <iomanip>
int main() {
    float a,b,c;
    std::cin >> a >> b >> c;
    float x1 = (-b - sqrt(pow(b,2) - 4*a*c)) / (2*a);
    float x2 = (-b + sqrt(pow(b,2) - 4*a*c)) / (2*a);
    std::cout << round(x1*1e3)/1e3 << " " << round(x2*1e3)/1e3;
}