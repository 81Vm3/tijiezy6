#include "main.hpp"

int Membership::getCost() {
    return (year*price_initial) + ((year*year-year)*10) / 2;
}

Membership::Membership(std::string name, unsigned int year, int price) :
    Product(name, year) {

    this->price_initial = price;
}