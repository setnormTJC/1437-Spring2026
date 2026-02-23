// Making a sandwich - with COMPOSITION.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include"Sandwich.h"

int main()
{
	Ingredient firstIngredient("mayo", 0.50);

	std::vector<Ingredient> ingredients =
	{
		firstIngredient,
		Ingredient("turkey", 1.50)
	};

	Sandwich aSandwich("The LAMO (a lame sandwich with only turkey and mayo)", ingredients);

	aSandwich.print();

	std::cout << "\n\n";
	std::cout << "Total cost is: \n";
	std::cout << aSandwich.calculateTotalCost() << "\n";
}

