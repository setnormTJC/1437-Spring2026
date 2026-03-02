#pragma once
#include <array>

#include<vector>
#include <string>

class Thumb
{
	float width;
	bool isHitchHikersThumb;
};

class Lung
{
	double volume; //in liters, usually, 'cause science breathing capacity (how "strongly" can you inhale?)
};

class Tail
{
	int width;
	bool isBushy;
};


class Animal
{
	int age = 0; 
	std::string speciesName; 
};

class Dog : public Animal
{
	//insert the dog's distinguishing characteristics (what differentiates a DOG from other animals)
	Tail tail; 
	std::array<Lung, 2> lungs;

public: 
	Dog() = delete; 
	Dog(int age, std::string speciesName, Tail tail, std::array<Lung, 2> lungs);
};

class Human : public Animal
{
	std::array<Lung, 2> lungs; //a static array (size cannot change)
	//std::vector<Lung> lungs;  //a dynamic array  -> not "appropriate" 
	std::array<Thumb, 2> thumbs; 
};

