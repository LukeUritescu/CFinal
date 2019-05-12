#include "pch.h"
#include "Coin.h"


std::string Coin::GetName()
{
	return name;
}

double Coin::GetMonetaryValue()
{
	return monetaryValue;
}

Coin::Coin()
{
	name = "name";
	monetaryValue = 00.00;
}



Coin::~Coin()
{
}
