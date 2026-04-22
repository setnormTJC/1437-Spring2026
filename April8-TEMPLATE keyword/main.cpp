// April8-TEMPLATE keyword.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include "CustomVector.h"


using namespace std; 

//This function is "templated" 
/*Template keyword allows for "generic" data types*/
template<typename SomeDataType>
void print(SomeDataType theThang) //thang is an homage to Rick from The Walking Dead
{
	std::cout << theThang << "\n";
}

//void print(int a) //this is kinda dumb
//{
//	cout << a << "\n";
//}
//
//void print(string a)
//{
//	cout << a << "\n";
//}

//DRY -> don't repeat yourself 


class Fruit
{
	std::string name; 
	std::string color; 

public: 
	Fruit() = delete; 
	Fruit(const std::string& name, const std::string& color)
		:
		name(name), color(color)
	{
	}

	//operator << ()
	//{

	//}

	friend ostream& operator<<(ostream& os, const Fruit& fruit);
};

ostream& operator<<(ostream& os, const Fruit& fruit)
{
	os << fruit.name << " with color" << fruit.color <<"\n";
	return os;
}




int main()
{

	auto i = 123; 
	
	CustomVector<int> nums({4, 5, 6});
	CustomVector<int> otherNums({ 7, 8, 9, 10 });

	//try
	//{
	//	nums.modifyThingAtGivenPosition(desiredLocationToChange, theNewNumber);
	//}
	//catch (const std::exception& theException)
	//{
	//	std::cout << "The exception was: " << theException.what() << "\n";
	//}

	CustomVector<int> newVector; 

	try
	{
		CustomVector <int> newVector = nums + otherNums; 
	}

	catch (exception theException)
	{
		cout << theException.what(); 
	}

	newVector.print(); 

}

