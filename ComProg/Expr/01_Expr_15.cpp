#include <iostream>
#include <cmath>
#include <iomanip>
int main()
{
    double x;
    std::cin >> x;
    double y = (pow(x, sqrt(log(pow(x + 1, 2)))) / (10 - x));
    std::cout << round(y*1e6)/1e6;
}