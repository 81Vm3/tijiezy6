#include "main.hpp"

int main() {
	using namespace std;
	
	vector<unique_ptr<Product>> list;
	
	int year = 5;

	list.emplace_back(make_unique<Car>("���ͺ�", year, 60000));
	list.emplace_back(make_unique<Membership>("Bilibili��Ա", year, 168));
	list.emplace_back(make_unique<Investment>("��Ʋ�Ʒ", year, 10000));

	int sum = 0;

	for (const auto& it : list) {
		sum += it->getCost();
	}

	cout << "Total sum = " << sum;
	return 0;
}