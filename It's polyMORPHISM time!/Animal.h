#pragma once


#include<string> 


using namespace std; 

class Animal
{

public:
	std::string name; 

	virtual void makeSound(); //virtual means "my children can override" me! (my children know better than me!)
};

class WildCat : public Animal
{
public:
	void makeSound() override;
};

class Fox : public Animal
{
public:
	/*Plays the one hit wonder by artist named "Ylvis"*/
	void makeSound() override;
};

class HouseCat : public Animal
{
public:
	/*Plays some audio of my kitty when she's happy*/
	void makeSound() override;
};