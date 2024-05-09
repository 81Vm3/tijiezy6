#ifndef PRODUCT_HPP
#define PRODUCT_HPP

class Product {
	
protected:
	std::string name;
	unsigned int year;
public:
	std::string Name();
	unsigned int Year();

	Product(std::string name, unsigned int year);

	virtual int getCost();
};

#endif