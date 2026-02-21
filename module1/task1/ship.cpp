#include "ship.hpp"

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
