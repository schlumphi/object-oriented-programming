#include "ship.hpp"

Ship::Ship() : id_(-1) {}

Ship::Ship(const int id, const std::string& name, const double speed, const size_t maxCrew, const uint64_t capacity)
    : id_(id), name_(name), speed_(speed), maxCrew_(maxCrew), capacity_(capacity) {}

Ship::Ship(const int id, const double speed, const size_t maxCrew) : Ship(id, "", speed, maxCrew, 0) {}

auto Ship::setName(const std::string& name) -> void {
    name_ = name;
}

auto Ship::getId() const -> int {
    return id_;
}

auto Ship::getName() const -> const std::string& {
    return name_;
}

auto Ship::getSpeed() const -> double {
    return speed_;
}

auto Ship::getMaxCrew() const -> size_t {
    return maxCrew_;
}

auto Ship::getCapacity() const -> uint64_t {
    return capacity_;
}
