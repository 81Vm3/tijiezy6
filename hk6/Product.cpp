#include "main.hpp"

std::string Product::Name() {
	return name;
}

unsigned int Product::Year() { return year; }

Product::Product(std::string name, unsigned int year) {
	this->name = name;
	this->year = year;
}

int Product::getCost() {
	return 0;
}
