#include <iostream>

#include "alcohol.hpp"
#include "fruit.hpp"
#include "item.hpp"

int main() {
    auto apple = Fruit{"apple", 3, 5, 3};
    std::cout << apple.getName() << ": basePrice: " << apple.getBasePrice() << " amount: " << apple.getAmount() << " price: " << apple.getPrice() << " \n";
    --apple;
    std::cout << apple.getName() << ": basePrice: " << apple.getBasePrice() << " amount: " << apple.getAmount() << " price: " << apple.getPrice() << " \n";

    return 0;
}
