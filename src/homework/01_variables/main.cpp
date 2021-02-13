//write include statements
#include "variables.h"
#include<iostream>


//write namespace using statement for cout
using std::cout;
using std::cin;


int main()
{
	double meal_amount;
	double tip_rate;
	double tip_amount;
	double tax_amount;
	double total;

	cout<<"Enter the meal amount in dollars and cents: ";
	cin>>meal_amount;

	tax_amount = get_sales_tax(meal_amount);

	cout<<"Enter the tip amount in decimal: ";
	cin>>tip_rate;

	tip_amount = get_tip_amount(meal_amount, tip_rate);

	total = tip_amount + tax_amount + meal_amount;

	cout<<"Meal Amount:\t$"<<meal_amount<<"\n";
	cout<<"Tax Amount:\t$"<<tax_amount<<"\n";
	cout<<"Tip Amount:\t$"<<tip_amount<<"\n";
	cout<<"---------------------------\n";
	cout<<"Total:\t$"<<total<<"\n";


	return 0;
}
