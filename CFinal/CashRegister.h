#pragma once
#include <string>
#include <vector>
#include <iostream>

#include "Coffee.h"
#include "Latte.h"
#include "EggSandwich.h"
#include "Doughnut.h"

#ifndef CFINAL_CASHREGISTER_H
#define CFINAL_CASHREGISTER_H
class CashRegister
{
public:
	void printAllMenuItems();

	CashRegister();
	~CashRegister();

protected:
	std::vector<MenuItems> menuItems;

	Coffee coffee;
	Latte latte;
	EggSandwich eggSandwich;
	Doughnut doughnut;

};
#endif
