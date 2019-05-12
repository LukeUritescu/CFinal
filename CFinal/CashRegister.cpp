#include "pch.h"
#include "CashRegister.h"


void CashRegister::printAllMenuItems()
{
	std::cout << "Menu Items: \n"
		<< menuItems[0].GetMenuName() << ": $" << menuItems[0].GetMonetaryValue() << "\n "
		<< menuItems[1].GetMenuName() << ": $" << menuItems[1].GetMonetaryValue() << "\n"
		<< menuItems[2].GetMenuName() << ": $" << menuItems[2].GetMonetaryValue() << "\n"
		<< menuItems[3].GetMenuName() << ": $" << menuItems[3].GetMonetaryValue() << "\n";
}

void CashRegister::MakeChange(double amount)
{
	change = math->makeChange(amount);
}

void CashRegister::printTheChange()
{
	std::cout << "Change: " << math->TotalCostOfOrder(change) << "\n";
	for (std::vector<Coin>::iterator it = change.begin(); it != change.end(); ++it) {
		std::cout << it->GetName() << "\n";
	}
}

CashRegister::CashRegister()
{
	menuItems.push_back(*coffee);
	menuItems.push_back(*latte);
	menuItems.push_back(*eggSandwich);
	menuItems.push_back(*doughnut);

}


CashRegister::~CashRegister()
{
}
