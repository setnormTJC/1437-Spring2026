// March2-demoing BOTH inheritance AND composition.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Animal.h"

int main()
{
	Animal someAnimal; 

	Tail myDogsTail(2.0, false); //2.0 inch wide tail and NOT a bushy tail (false) 

	std::array<Lung, 2> myDogsLungs(1500); //1500 mL lung volume for a "medium" size dog
	Dog myDog(3, "canis familiaris", myDogsTail, myDogsLungs)  ;

	//Human me(); 

}
