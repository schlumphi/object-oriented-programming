#include "ship.hpp"

#include <algorithm>

void Ship::load(std::shared_ptr<Cargo> cargo) {
    cargo_.push_back(cargo);
}

void Ship::unload(Cargo* cargo) {
    auto it = std::find_if(cargo_.begin(), cargo_.end(), [&cargo](const std::shared_ptr<Cargo>& c) { return c.get() == cargo; });
    if (it != cargo_.end()) {
        cargo_.erase(it);
    }
}
