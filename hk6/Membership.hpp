#ifndef MEMBERSHIP_HPP
#define MEMBERSHIP_HPP

class Membership : public Product {
private:
	int price_initial;
public:
	int getCost() override;
	Membership(std::string name, unsigned int year, int price);
};

#endif