#include "item.hpp"

Item::Item(const std::string& name, const size_t amount, const size_t basePrice, const Rarity rarity)
    : Cargo(name, amount, basePrice), rarity_(rarity) {}

size_t Item::getPrice() const {
    switch (rarity_) {
    case Rarity::Rare:
        return basePrice_ * 5;
    case Rarity::Epic:
        return basePrice_ * 25;
    case Rarity::Legendary:
        return basePrice_ * 100;
    default:
        return basePrice_;
    }
}
