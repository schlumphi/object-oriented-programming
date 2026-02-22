#pragma once
#include <string>

class Cargo {
private:
    std::string name_;
    size_t amount_;
    double basePrice_;

public:
    auto operator+=(const size_t amount) -> Cargo& {
        amount_ += amount;
        return *this;
    }

    auto operator-=(const size_t amount) -> Cargo& {
        if (amount <= amount_) {
            amount_ -= amount;
        }
        return *this;
    }
};
