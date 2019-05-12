#pragma once
#include <string>
#include <vector>
#include <iostream>

#ifndef CFINAL_COIN_H
#define CFINAL_COIN_H
class Coin
{
public:
	std::string GetName();
	double GetMonetaryValue();
	Coin();
	~Coin();

protected:
	std::string name;
	double monetaryValue;

};

#endif 

