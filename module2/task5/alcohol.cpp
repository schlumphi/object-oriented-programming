#include "alcohol.hpp"

#include <cmath>
#include <iostream>

Alcohol::Alcohol(const std::string& name, const size_t amount, const size_t basePrice, const double ethanolContent)
    : Cargo(name, amount, basePrice), ethanolContent_(validateEthanolContent(ethanolContent)) {}

double Alcohol::validateEthanolContent(const double ethanolContent) {
    if (ethanolContent <= 0.0 || ethanolContent > 96.0) {
        throw std::invalid_argument("expected 'ethanolContent' to be in range (0, 96.0>");
    }
    return ethanolContent;
}

size_t Alcohol::getPrice() const {
    return static_cast<size_t>(std::round(static_cast<double>(basePrice_) * ethanolContent_));
}
