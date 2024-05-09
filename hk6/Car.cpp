#include "main.hpp"

int Car::getCost() {
    return price_initial + (year * (price_initial * 0.1));
}

Car::Car(std::string name, unsigned int year, int price) : 
    Product(name, year) {
    
    this->price_initial = price;
}