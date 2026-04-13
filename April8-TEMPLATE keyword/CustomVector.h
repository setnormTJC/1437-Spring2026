#pragma once

#include<iostream> 
#include<stdexcept> //"standard exceptions"
#include <vector>

template<typename SomeDataType>
class CustomVector
{
	std::vector<SomeDataType> thangs; //again, a Rick Grimes reference

public: 
	CustomVector() = delete; 
	CustomVector(const std::vector<SomeDataType>& thangs);

	void print() const; //declaration 

	void modifyThingAtGivenPosition(int theGivenPosition, SomeDataType theNewValue);


};



//template<typename SomeDataType>
//inline CustomVector<SomeDataType>::CustomVector(const std::vector<SomeDataType>& thangs)
//{
//}

template<typename SomeDataType>
inline CustomVector<SomeDataType>::CustomVector(const std::vector<SomeDataType>& thangs)
	:
	thangs(thangs)
{
}

template<typename SomeDataType>
inline void CustomVector<SomeDataType>::print() const
{
	for (auto currentThang : thangs)
	{
		std::cout << currentThang << "\n";
	}
}


template<typename SomeDataType>
inline void CustomVector<SomeDataType>::modifyThingAtGivenPosition(int theGivenPosition, SomeDataType theNewValue)
{

	if (theGivenPosition > thangs.size() - 1)
	{
		throw std::runtime_error("you went outa bounds, bro!");
	}
	//else
	//{
	thangs[theGivenPosition] = theNewValue;
	//}


}