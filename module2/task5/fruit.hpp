#pragma once
#include "cargo.hpp"

class Fruit : public Cargo {
public:
    Fruit(const std::string& name, const size_t amount, const size_t basePrice, const size_t timeToSpoil);

    size_t getPrice() const override;
    std::string getName() const override { return name_; }
    size_t getAmount() const override { return amount_; }
    size_t getBasePrice() const override { return basePrice_; }

    Fruit& operator--() {
        --amount_;
        return *this;
    }

private:
    size_t timeToSpoil_;
};
