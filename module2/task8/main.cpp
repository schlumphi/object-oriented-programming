#include <iostream>

#include "coordinates.hpp"

int main() {
    auto a = Coordinates{3, 4};
    auto b = Coordinates{21, 37};

    std::cout << (a == b) << "\n";
    std::cout << Coordinates::distance(a, b) << "\n";

    return 0;
}
