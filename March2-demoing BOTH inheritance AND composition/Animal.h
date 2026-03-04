#pragma once
#include <array>

#include<vector>
#include <string>

class Thumbs
{
	bool isHitchHikersThumb;

public: 
	/*https://tenor.com/search/fonzie-thumbs-up-gifs*/
	void giveEmUp(); 
};

class Lungs
{
	double volume; //in liters, usually, 'cause science breathing capacity (how "strongly" can you inhale?)

public: 
	Lungs() = delete; 
	Lungs(double volume);
};

class Tail
{
public: 
	bool isWagging; //be wary (not weary) of "breaking encapsulation" 
};


class Animal
{
protected: 
	int age = 0; 
	std::string speciesName; 

public: 
	Animal() = default;
	Animal(int age, std::string speciesName);

};

class Dog : public Animal
{
	//insert the dog's distinguishing characteristics (what differentiates a DOG from other animals)
	Tail tail; 
	Lungs lungs; 


public: 
	Dog() = delete; 
	Dog(int age, Tail tail, Lungs lungs, std::string speciesName = "canis familiaris"); //note the default initialization of species!

	friend class Human; //gives Human objects access to PRIVATE members of the Dog
};

class Human : public Animal
{
	Lungs lungs; //a static array (size cannot change)
		//std::vector<Lung> lungs;  //a dynamic array  -> not "appropriate" 
	Thumbs thumbs;

public: 
	Human() = delete; 
	Human(Lungs lungs, Thumbs thumbs); //function declaration (not a definition)

	Thumbs getThumbs(); 

	void petDog(Dog& dogToPet);


};

