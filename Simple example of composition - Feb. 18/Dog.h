#pragma once

#include<string> 
#include <vector>


struct Leg
{
	float length; 
	float width; 
};

class Dog
{
private: 
	std::string name; 
	std::string eyeColor; 
	std::vector<Leg> legs; //when one class is made up of objects of ANOTHER class, it is called "composition"

public: 
	Dog() = delete; 
	//"Doris", "brown", 4, 12.0f, 2.0f
	Dog(std::string name, std::string eyeColor, Leg leg);

};

