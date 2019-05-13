#pragma once
#include <string>
#include <vector>
#include <iostream>

#include "MenuItems.h"
#include "Coin.h"
#include "Coffee.h"
#include "Latte.h"
#include "EggSandwich.h"
#include "Doughnut.h"
#include "MathClass.h"

#ifndef CFINAL_CASHREGISTER_H
#define CFINAL_CASHREGISTER_H
class CashRegister
{
public:
	void printAllMenuItems();
	void MakeChange(double amount);
	void printTheChange();
	double GetTotalValueOfOrder(std::vector<MenuItems> menu);


	CashRegister();
	~CashRegister();

protected:
	std::vector<MenuItems> menuItems;
	std::vector<Coin> change;
	double orderTotal;

	Coffee coffee;
	Latte latte;
	EggSandwich eggSandwich;
	Doughnut doughnut;
	MathClass math;

};
#endif
