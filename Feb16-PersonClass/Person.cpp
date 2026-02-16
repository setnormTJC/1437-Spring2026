#include "Person.h"
#include <iostream>

#include<string>

//:: (double colon) is called the "scope resolution operator" 
//an operator that determines where something is defined 
Person::Person(int age, HairType hairType, std::string name)

	:
	
	age(age), hairType(hairType), name(name)

{
	std::cout << "Person was created successfully!\n";
}

void Person::print()
{
	std::cout << "Person name is : " << name << "\n";
	std::cout << "Person AGE is: " << age << "\n";


	std::string hairTypeAsString; 
	switch (hairType) //similar to if ... else if ...else
	{
	case HairType::BALD: 
		hairTypeAsString = "BALDY!";
		break; 

	case HairType::SHORT:
		hairTypeAsString = "Short hair person";
		break; 

	case HairType::LONG: 
		hairTypeAsString = "What LUXURIOUS locks you have!";
		break; 

	default: //similar to else (a "catch all")
		std::cout << "UNRECOGNIZED hair type!\n";
		break; 
	}

	std::cout << "Person hair type is: " << hairTypeAsString << "\n";
} 
