#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double w,h;
    std::cin >> w >> h;
    double Mosteller = sqrt(w * h) / 60;
    double Haycock = 0.024265 * pow(w , 0.5378) * pow(h , 0.3964);
    double Boyd = 0.0333 * pow(w , 0.6157 - 0.0188*log10(w)) * pow(h , 0.3);
    std::cout << std::fixed << std::setprecision(15);
    std::cout << Mosteller << '\n' << Haycock << '\n' << Boyd;
}