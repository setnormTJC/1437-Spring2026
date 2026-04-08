#pragma once

#include<iostream> 
#include <vector>

template<typename SomeDataType>
class CustomVector
{
	std::vector<SomeDataType> thangs; //again, a Rick Grimes reference

public: 
	CustomVector() = delete; 
	CustomVector(const std::vector<SomeDataType>& thangs);

	void print() const; //declaration 


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
