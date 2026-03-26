#pragma once
#include <cmath>
#include <cstdint>
#include <iostream>

class Coordinates {
public:
    Coordinates(uint64_t positionX, uint64_t positionY) : positionX_(positionX), positionY_(positionY) {}

    static size_t distance(const Coordinates& lhs, const Coordinates& rhs) {
        return static_cast<size_t>(
            ceil(
                sqrt(pow((rhs.positionX_ - lhs.positionX_), 2) +
                     pow((rhs.positionY_ - lhs.positionY_), 2))));
    }

    bool operator==(Coordinates& rhs) const {
        if (rhs.positionX_ == positionX_ && rhs.positionY_ == positionY_) {
            return true;
        }
        return false;
    }

private:
    uint64_t positionX_;
    uint64_t positionY_;
};
