#pragma once
#include <cstdint>
#include <string>

class Ship {
private:
    const int id_;
    const std::string name_;
    const double speed_;
    const size_t maxCrew_;
    const uint64_t capacity_;

public:
    auto getId() const -> int;
    auto getName() const -> const std::string&;
    auto getSpeed() const -> double;
    auto getMaxCrew() const -> size_t;
    auto getCapacity() const -> uint64_t;
};
