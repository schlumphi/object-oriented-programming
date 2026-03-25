#include "dry_fruit.hpp"

DryFruit::DryFruit(const std::string& name, const size_t amount, const size_t basePrice, const size_t timeToSpoil)
    : Fruit(name, amount, basePrice, timeToSpoil) {}

size_t DryFruit::getPrice() const {
    return basePrice_ * 3;
}
