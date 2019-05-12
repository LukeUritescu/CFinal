#pragma once
#include <string>
#include <vector>
#include <iostream>

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
	CashRegister();
	~CashRegister();

protected:
	std::vector<MenuItems> menuItems;
	std::vector<Coin> change;

	std::unique_ptr<Coffee> coffee = std::make_unique<Coffee>();
	std::unique_ptr<Latte> latte = std::make_unique<Latte>();
	std::unique_ptr<EggSandwich> eggSandwich = std::make_unique<EggSandwich>();
	std::unique_ptr<Doughnut> doughnut = std::make_unique<Doughnut>();

	std::unique_ptr<MathClass> math = std::make_unique<MathClass>();

};
#endif
