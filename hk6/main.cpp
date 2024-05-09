#include "main.hpp"

int main() {
	using namespace std;
	
	vector<unique_ptr<Product>> list;
	
	int year = 5;

	list.emplace_back(make_unique<Car>("迈巴赫", year, 60000));
	list.emplace_back(make_unique<Membership>("Bilibili会员", year, 168));
	list.emplace_back(make_unique<Investment>("理财产品", year, 10000));

	int sum = 0;

	for (const auto& it : list) {
		sum += it->getCost();
	}

	cout << "Total sum = " << sum;
	return 0;
}