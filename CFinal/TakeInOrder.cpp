#include "pch.h"
#include "TakeInOrder.h"


std::vector<MenuItems> TakeInOrder::GetOrder(std::string order)
{
	int numberOfItem = 0;
	std::vector<MenuItems> item;
	for (size_t i = 0; i < order.length(); i++) {
		if (isdigit(order.at(i))) {
			numberOfItem = determineIfNumber(order.at(i));
			for (size_t j = i; j < i + 3; j++) {
				if (order.at(j) == 'C' || order.at(j) == 'c') {
					for (int i = 0; i < numberOfItem; i++) {
						item.push_back(Coffee());
					}
				}
				if (order.at(j) == 'L' || order.at(j) == 'l') {
					for (int i = 0; i < numberOfItem; i++) {
						item.push_back(Latte());
					}
				}
				if (order.at(j) == 'E' || order.at(j) == 'e') {
					for (int i = 0; i < numberOfItem; i++) {
						item.push_back(EggSandwich());
					}
				}
				if (order.at(j) == 'D' || order.at(j) == 'd') {
					for (int i = 0; i < numberOfItem; i++) {
						item.push_back(Doughnut());
					}
				}
			}
		}
	}
	return item;
}

int TakeInOrder::determineIfNumber(char isNumber)
{
	if (isNumber == '1') {
		return 1;
	}
	else if (isNumber == '2') {
		return 2;
	}
	else if (isNumber == '3') {
		return 3;
	}
	else if (isNumber == '4') {
		return 4;
	}
	else if (isNumber == '5') {
		return 5;
	}
	else if (isNumber == '6') {
		return 6;
	}
	else if (isNumber == '7') {
		return 7;
	}
	else if (isNumber == '8') {
		return 8;
	}
	else if (isNumber == '9') {
		return 9;
	}
	else {
		return 0;
	}

}


TakeInOrder::TakeInOrder()
{
}


TakeInOrder::~TakeInOrder()
{
}
