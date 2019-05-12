#pragma once
#include <string>
#include <vector>
#include <iostream>

#ifndef CFINAL_MENUITEMS_H
#define CFINAL_MENUITEMS_H

class MenuItems
{
public:
	std::string GetMenuName();
	double GetMonetaryValue();
	MenuItems();
	~MenuItems();
protected:
	std::string menuName;
	double monetaryValue;
};
#endif // !CFINAL_MENUITEMS_H

