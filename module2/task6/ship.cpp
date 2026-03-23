#include "ship.hpp"

void Ship::load(std::shared_ptr<Cargo> cargo) {
    cargo_.push_back(cargo);
}

// void Ship::unload(Cargo* cargo) {
// }
