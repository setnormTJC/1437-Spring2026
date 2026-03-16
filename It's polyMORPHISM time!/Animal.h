#pragma once

class Animal
{
public: 
	void makeSound();
};

class WildCat : public Animal
{
public:
	void makeSound();
};

class Fox : public Animal
{
public:
	/*Plays the one hit wonder by artist named "Ylvis"*/
	void makeSound();
};

class HouseCat : public Animal
{
public:
	/*Plays some audio of my kitty when she's happy*/
	void makeSound();
};