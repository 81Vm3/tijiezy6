#include "main.hpp"

int Investment::getCost() {
	return initial_investment - year * initial_investment * 0.05;
}

Investment::Investment(std::string name, unsigned int year, int price) :
    Product(name, year) {

    this->initial_investment = price;
}