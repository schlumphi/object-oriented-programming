#pragma once
#include <memory>
#include <vector>

#include "cargo.hpp"

class Ship {
public:
    Ship() {};
    const std::vector<std::shared_ptr<Cargo>>& cargo() const noexcept { return cargo_; }

    void load(std::shared_ptr<Cargo> cargo);
    void unload(Cargo* cargo);

private:
    std::vector<std::shared_ptr<Cargo>> cargo_;
};
