#include <iostream>
#include <memory>

#include "dry_fruit.hpp"
#include "fruit.hpp"

int main() {
    auto apple = std::make_shared<Fruit>("apple", 3, 5, 3);
    std::cout << apple->getName() << ": basePrice: " << apple->getBasePrice() << " amount: " << apple->getAmount() << " price: " << apple->getPrice() << " \n";
    --(*apple);
    std::cout << apple->getName() << ": basePrice: " << apple->getBasePrice() << " amount: " << apple->getAmount() << " price: " << apple->getPrice() << " \n";

    auto raisins = std::make_shared<DryFruit>("raisins", 2, 3, 4);
    std::cout << raisins->getName() << ": basePrice: " << raisins->getBasePrice() << " amount: " << raisins->getAmount() << " price: " << raisins->getPrice() << " timeToSpoil: " << raisins->getTimeToSpoil() << "\n";
    for (size_t i = 0; i < 9; ++i) {
        --(*raisins);
    }
    std::cout << raisins->getName() << ": basePrice: " << raisins->getBasePrice() << " amount: " << raisins->getAmount() << " price: " << raisins->getPrice() << " timeToSpoil: " << raisins->getTimeToSpoil() << "\n";
    --(*raisins);
    std::cout << raisins->getName() << ": basePrice: " << raisins->getBasePrice() << " amount: " << raisins->getAmount() << " price: " << raisins->getPrice() << " timeToSpoil: " << raisins->getTimeToSpoil() << "\n";
    return 0;
}
