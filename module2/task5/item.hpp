#pragma once
#include "cargo.hpp"

class Item : public Cargo {
public:
    enum class Rarity {
        Common,
        Rare,
        Epic,
        Legendary
    };

    Item(const std::string& name, const size_t amount, const size_t basePrice, const Rarity rarity);

    size_t getPrice() const override;
    std::string getName() const override;
    size_t getAmount() const override;
    size_t getBasePrice() const override;

private:
    Rarity rarity_;
};
