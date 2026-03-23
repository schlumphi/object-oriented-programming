#pragma once
#include "cargo.hpp"

class Alcohol : public Cargo {
public:
    Alcohol(const std::string& name, const size_t amount, const size_t basePrice, const double ethanolContent);

    size_t getPrice() const override;
    std::string getName() const override;
    size_t getAmount() const override;
    size_t getBasePrice() const override;

private:
    double ethanolContent;
};
