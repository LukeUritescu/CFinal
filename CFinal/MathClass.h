#pragma once
#include <string>
#include <vector>
#include <math.h>
#include <iostream>

#include "Coin.h"
#include "Penny.h"
#include "Nickel.h"
#include "Dime.h"
#include "Quarter.h"
#include "OneDollar.h"
#include "FiveDollar.h"
#include "TenDollar.h"
#include "TwentyDollar.h"

#ifndef CFINAL_MATHCLASS_H
#define CFINAL_MATHCLASS_H
class MathClass
{
public:
	void TotalCostOfOrder();
	std::vector<Coin> makeChange(double payment);


	MathClass();
	~MathClass();
protected:
	double totalCostOfOrder;
	double payment;

	std::vector<Coin> change;

	Penny penny;
	Nickel nickel;
	Dime dime;
	Quarter quarter;
	OneDollar oneDollar;
	FiveDollar fiveDollar;
	TenDollar tenDollar;
	TwentyDollar twentyDollar;
};
#endif
