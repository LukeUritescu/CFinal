#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>

#include "MenuItems.h"
#include "Coffee.h"
#include "Latte.h"
#include "EggSandwich.h"
#include "Doughnut.h"
#ifndef CFINAL_TAKEINORDER_H
#define CFINAL_TAKEINORDER_H
class TakeInOrder
{
public:
	std::vector<MenuItems> GetOrder(std::string order);
	int determineIfNumber(char isNumber);
	TakeInOrder();
	~TakeInOrder();

protected:
	
};
#endif