#pragma once
#include <vector>
#include <string>

struct Ingredient //why a struct - easy access! (everything PUBLIC by default)
{
public: 
	std::string name; 
	double price; //slice of turkey - 0.99 if added on
};

class Sandwich
{
private: 
	std::string name; 
	std::vector<Ingredient> ingredients; 

public: 
	/*This is a DEFAULT constructor - takes no inputs*/
	Sandwich() = delete; 
	/*recall: this guy is called a "parameterized constructor"*/
	Sandwich(const std::string& name, const std::vector<Ingredient>& ingredients); //NOTE the use of "const" and & (reference variable)

	void print() const; //why const? To prevent accidental modification of the ingredients

	/*PERHAPS we make an overload so that customer can modify order?*/
	//double calculateTotalCost(); 

	double calculateTotalCost() const;

};

