// CFinal.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "CashRegister.h"
#include "TakeInOrder.h"

int main()
{
	std::string input;
	std::unique_ptr<CashRegister> cash = std::make_unique<CashRegister>();
	std::unique_ptr<TakeInOrder> takeIn = std::make_unique<TakeInOrder>();
	cash->printAllMenuItems();
	std::cout << "Type how much you want from 1-9, and then write in the menu item you would like\n";
	std::string orderInput = "1 Latte 1 Coffee 2 Doughnut";
	//std::cin >> orderInput;
	std::cout << "$" << cash->GetTotalValueOfOrder(takeIn->GetOrder(orderInput)) << "\n";
	std::cout << "Please enter an amount in whole dollars to pay.\n";
	std::cin >> input;
	cash->MakeChange(std::stod(input));
	cash->printTheChange();
}

