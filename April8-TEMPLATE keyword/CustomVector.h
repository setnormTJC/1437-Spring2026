#pragma once

#include<iostream> 
#include<stdexcept> //"standard exceptions"
#include <vector>

using namespace std; 

/*this "wraps around" the vector and EXTENDS its functionality (gives it "superpowers"!)*/
template<typename SomeDataType>
class CustomVector
{
	std::vector<SomeDataType> thangs; //again, a Rick Grimes reference

public: 
	CustomVector() = default; 
	CustomVector(const std::vector<SomeDataType>& thangs);

	void print() const; //declaration 

	void modifyThingAtGivenPosition(int theGivenPosition, SomeDataType theNewValue);

	/*This guy can THROW! He's needs to audition for the MLB!*/
	CustomVector operator + (CustomVector rightHandSide)
	{
		if (rightHandSide.thangs.size() != this->thangs.size())
		{
			throw runtime_error("Array sizes do not match, brotherman");

			//
		}

		CustomVector sumVector; 

		for (int i = 0; i < thangs.size(); ++i)
		{
			sumVector.thangs.push_back(this->thangs.at(i) + rightHandSide.thangs.at(i));
		}


		return sumVector; 
	}
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