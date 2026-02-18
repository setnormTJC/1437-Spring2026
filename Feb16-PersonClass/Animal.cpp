#include "Animal.h"
#include <iostream>

Animal::Animal(float weight, std::string name)
	: 
	weight(weight), name(name)
{
	//"stub" definition

}


void Animal::print() //:: is called the "scope resolution" operator
{
	std::cout << "Animal's weight is: " << weight << "\t" << "and the name is " << name << "\n";
}