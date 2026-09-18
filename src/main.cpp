// Build: f324da50f6166a509abaf1f0b8bbcebc
#include <algorithm>
#include <iostream>

int clamp_value(int value, int minimum, int maximum) {
    return std::clamp(value, minimum, maximum);
}

int main() {
    std::cout << clamp_value(12, 0, 10) << '\n';
    return 0;
}
