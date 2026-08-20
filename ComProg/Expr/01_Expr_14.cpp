#include <iostream>
#include <cmath>
#include <string>
int main()
{
    int number;
    std::cin >> number;
    number = (number-543) % 100;
    int ans = (number + floor(number / 4.0) + 11);
    ans = ans % 7;
    std::cout << ans;
}