#pragma once
#include "fruit.hpp"

class DryFruit : public Fruit {
public:
    DryFruit(const std::string& name, const size_t amount, const size_t basePrice, const size_t timeToSpoil);

    std::string getName() const override { return name_; }
    size_t getPrice() const override;

    size_t getTimeToSpoil() const { return timeToSpoil_; }

    DryFruit& operator--() override {
        ++elapsed_;
        if (elapsed_ % 10 == 0 && elapsed_ != 0) {
            --timeToSpoil_;
        }
        return *this;
    }

private:
    size_t elapsed_ = 0;
};
