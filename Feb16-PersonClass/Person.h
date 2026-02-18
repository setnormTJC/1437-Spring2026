#pragma once
#include <string>

enum class HairType //enum is short for "enumeration" (synonymous with a "list") 
{
	BALD, //why ALL CAPS? 
	SHORT, 
	LONG,
};


class Person
{
private: 
	int age; 
	HairType hairType;
	std::string name; 
	bool isAlive; 


public: 
	Person() = delete; 

	/*PascalCase and camelCase and snake_case and kebab-case and SCREAMING_SNAKE_CASE*/


	Person(int age, HairType hairType, std::string name); 

	void print(); //this is a function DECLARATION (not a definition -> that goes in Person.cpp)

	void kill(); 
};

