#include "pch.h"
#include "MathClass.h"


double MathClass::TotalCostOfOrder(std::vector<Coin> Order)
{
	for (std::vector<Coin>::iterator it = Order.begin(); it != Order.end(); ++it) {
		totalCostOfOrder = totalCostOfOrder + round(it->GetMonetaryValue());
	}
	return totalCostOfOrder;
}

std::vector<Coin> MathClass::makeChange(double payment)
{
	while (payment > 0) {
		if ((payment - (twentyDollar.GetMonetaryValue())) >= 0) {
			payment = payment - twentyDollar.GetMonetaryValue();
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

		else if ((payment - (penny.GetMonetaryValue())) >= 0) {
			payment = payment - penny.GetMonetaryValue();
			change.push_back(penny);
		}

		else {
			payment = 0;
		}

	}
	return change;
}

MathClass::MathClass()
{
}


MathClass::~MathClass()
{
}
