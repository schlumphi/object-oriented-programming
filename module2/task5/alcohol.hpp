#pragma once
#include "cargo.hpp"

class Alcohol : public Cargo {
public:
    Alcohol(const std::string& name, const size_t amount, const size_t basePrice, const double ethanolContent);

    size_t getPrice() const override;
    std::string getName() const override { return name_; }
    size_t getAmount() const override { return amount_; }
    size_t getBasePrice() const override { return basePrice_; }

    static double validateEthanolContent(const double ethanolContent);

private:
    double ethanolContent_;
};
