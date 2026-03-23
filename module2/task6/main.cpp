#include <iostream>

#include "alcohol.hpp"
#include "fruit.hpp"
#include "item.hpp"
#include "ship.hpp"

int main() {
    auto apple = Fruit{"apple", 3, 5, 3};
    std::cout << apple.getName() << ": basePrice: " << apple.getBasePrice() << " amount: " << apple.getAmount() << " price: " << apple.getPrice() << " \n";
    --apple;
    std::cout << apple.getName() << ": basePrice: " << apple.getBasePrice() << " amount: " << apple.getAmount() << " price: " << apple.getPrice() << " \n";

    auto cider = Alcohol{"cider", 3, 2, 5.5};
    std::cout << cider.getName() << ": basePrice: " << cider.getBasePrice() << " amount: " << cider.getAmount() << " price: " << cider.getPrice() << " \n";
    auto whiskey = Alcohol{"whiskey", 3, 2, 36};
    std::cout << whiskey.getName() << ": basePrice: " << whiskey.getBasePrice() << " amount: " << whiskey.getAmount() << " price: " << whiskey.getPrice() << " \n";

    auto hammer = Item("hammer", 1, 5, Item::Rarity::Common);
    std::cout << hammer.getName() << ": basePrice: " << hammer.getBasePrice() << " amount: " << hammer.getAmount() << " price: " << hammer.getPrice() << " \n";

    auto ruby = Item("ruby", 1, 5, Item::Rarity::Epic);
    std::cout << ruby.getName() << ": basePrice: " << ruby.getBasePrice() << " amount: " << ruby.getAmount() << " price: " << ruby.getPrice() << " \n";

    auto ship = Ship{};
    ship.load(std::make_shared<Fruit>(apple));
    ship.load(std::make_shared<Alcohol>(cider));
    ship.load(std::make_shared<Item>(hammer));

    auto cargo = ship.cargo();
    std::cout << "ship cargo:\n";
    for (const auto& c : cargo) {
        std::cout << c->getName() << "\n";
    }

    return 0;
}
