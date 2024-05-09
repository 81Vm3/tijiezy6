#ifndef INVESTMENT_HPP
#define INVESTMENT_HPP

class Investment : public Product {
private:
	int initial_investment;
public:
	int getCost();
	Investment(std::string name, unsigned int year, int price);
};

#endif