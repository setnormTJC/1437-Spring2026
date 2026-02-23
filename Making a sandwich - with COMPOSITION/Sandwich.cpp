#include "Sandwich.h"

#include<iomanip> //for setw(idth) AND setprecision
#include <iostream>

Sandwich::Sandwich(const std::string& name, const std::vector<Ingredient>& ingredients)
	: 
	name(name), ingredients(ingredients) //this is called "member initializer syntax"
{
}

void Sandwich::print() const
{
	std::cout << std::fixed << std::setprecision(2); //fixed means set the number of digits after the decimal
	
	std::cout << name << "contains: \n";
	for (const Ingredient& currentIngredient : ingredients)
	{
		std::cout << currentIngredient.name << "---$" << currentIngredient.price << "\n";
	}
}

double Sandwich::calculateTotalCost() const
{
	double cost = 0.0; 

	for (const Ingredient& currentIngredient : ingredients)
	{
		cost += currentIngredient.price;
	}

	return cost;
}
