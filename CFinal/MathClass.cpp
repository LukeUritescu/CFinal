#include "pch.h"
#include "MathClass.h"


double MathClass::TotalCostOfOrder(std::vector<MenuItems> Order)
{
	for (std::vector<MenuItems>::iterator it = Order.begin(); it != Order.end(); ++it) {
		totalCostOfOrder = totalCostOfOrder + it->GetMonetaryValue();
	}
	return totalCostOfOrder;
}

std::vector<Coin> MathClass::makeChange(double payment)
{
	while (payment > 0.00) {
		if ((payment - (twentyDollar.GetMonetaryValue())) >= 0) {
			payment = payment -twentyDollar.GetMonetaryValue();
			change.push_back(twentyDollar);
		}
		
		else if ((payment - (tenDollar.GetMonetaryValue())) >= 0) {
			payment = payment - tenDollar.GetMonetaryValue();
			change.push_back(tenDollar);
		}
		
		else if ((payment - (fiveDollar.GetMonetaryValue())) >= 0) {
			payment = payment - fiveDollar.GetMonetaryValue();
			change.push_back(fiveDollar);
		}

		else if ((payment - (oneDollar.GetMonetaryValue())) >= 0) {
			payment = payment - oneDollar.GetMonetaryValue();
			change.push_back(oneDollar);
		}

		else if ((payment - (quarter.GetMonetaryValue())) >= 0) {
			payment = payment - quarter.GetMonetaryValue();
			change.push_back(quarter);
		}

		else if ((payment - (dime.GetMonetaryValue())) >= 0) {
			payment = payment - dime.GetMonetaryValue();
			change.push_back(dime);
		}

		else if ((payment - (nickel.GetMonetaryValue())) >= 0) {
			payment = payment - nickel.GetMonetaryValue();
			change.push_back(nickel);
		}

		else if ((payment - (penny.GetMonetaryValue())) >= 0.00) {
			payment = payment - penny.GetMonetaryValue();
			change.push_back(penny);
		}

		else {
			payment = 0;
		}

	}
	return change;
}

double MathClass::GetChangeOfOrder(std::vector<Coin> giveChange)
{
	for (std::vector<Coin>::iterator it = giveChange.begin(); it != giveChange.end(); ++it) {
		changeAmount = changeAmount + it->GetMonetaryValue();
	}
	return changeAmount;
}

MathClass::MathClass()
{
}


MathClass::~MathClass()
{
}
