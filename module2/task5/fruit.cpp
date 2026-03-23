#include "fruit.hpp"

Fruit::Fruit(const std::string& name, const size_t amount, const size_t basePrice, const size_t timeToSpoil)
    : Cargo(name, amount, basePrice), timeToSpoil_(timeToSpoil) {
}

size_t Fruit::getPrice() const {
    return timeToSpoil_ * basePrice_;
}
