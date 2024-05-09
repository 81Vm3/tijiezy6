#ifndef CAR_HPP
#define CAR_HPP

class Car : public Product {
private:
	int price_initial;
public:
	int getCost();
	Car(std::string name, unsigned int year, int price);
};


#endif