#pragma once
#include <string>
class Animal
{
private: //generally, "member variables" should be "private" access (ONLY functions in this class can modify)
	float weight; //in pounds 
	std::string name; 

public: 
	Animal() = delete; //what is this? (Look it up, perhaps?)
	Animal(float weight, std::string name); //function declaration! Huzzahh!

	void print(); 

};

