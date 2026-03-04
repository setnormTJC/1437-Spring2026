#include "Animal.h"


#include<iostream>

void Thumbs::giveEmUp()
{
	system("start https://tenor.com/search/fonzie-thumbs-up-gifs");
}

Human::Human(Lungs lungs, Thumbs thumbs)
	: //this does NOT mean inheritance in this case! (It means the "initializer list syntax" in C++) 
	lungs(lungs), thumbs(thumbs)
{
}

Thumbs Human::getThumbs()
{
	return thumbs; 
}

void Human::petDog(Dog& dogToPet)
{
	dogToPet.tail.isWagging = true; 


	std::cout << "Puppy is happy now\n";
}

Lungs::Lungs(double volume)
	: 
	volume(volume) //the initiliazer list syntax 
{
	//volume = volumeSpecifiedInMain; //this is the "old school" way - join the new school
}

Dog::Dog(int age, Tail tail, Lungs lungs, std::string speciesName) //default initialization
	:
	Animal(age, speciesName), 
	tail(tail), lungs(lungs)
{
}

Animal::Animal(int age, std::string speciesName)
	: age(age), speciesName(speciesName)
{

}
