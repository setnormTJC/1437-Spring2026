// March2-demoing BOTH inheritance AND composition.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Animal.h"

namespace MySpace
{
	int a = 123; 
}

//using namespace std; 

int main()
{

	Thumbs myThumbs; 
	//myThumbs.giveEmUp();

	//Animal someAnimal; 

	//Tail myDogsTail(2.0, false); //2.0 inch wide tail and NOT a bushy tail (false) 

	//std::array<Lung, 2> myDogsLungs(1500); //1500 mL lung volume for a "medium" size dog
	//Dog myDog(3, "canis familiaris", myDogsTail, myDogsLungs)  ;

	Lungs myLungs(6.0); 

	Human me(myLungs, myThumbs);

	//me.getThumbs().giveEmUp();

	Dog myDog(1, Tail(), Lungs(0.25));

	me.petDog(myDog); 

	//Human(Lungs lungs, Thumbs thumbs); 

}
