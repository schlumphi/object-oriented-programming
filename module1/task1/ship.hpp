#pragma once
#include <cstdint>
#include <string>

class Ship {
private:
    int id_;
    std::string name_;
    double speed_;
    size_t maxCrew_;
    uint64_t capacity_;

public:
    Ship();
    Ship(const int id, const std::string& name, const double speed, const size_t maxCrew, const uint64_t capacity);
    Ship(const int id, const double speed, const size_t maxCrew);

    auto setName(const std::string&) -> void;

    auto getId() const -> int;
    auto getName() const -> const std::string&;
    auto getSpeed() const -> double;
    auto getMaxCrew() const -> size_t;
    auto getCapacity() const -> uint64_t;
};
