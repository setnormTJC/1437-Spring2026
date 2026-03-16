// It's polyMORPHISM time!.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include<vector>

#include"Animal.h"

using namespace std;


void demoBORINGPointerIntroduction()
{
	int a = 123; 

	int* pA = &a; //what is this AMPERSAND (&) and the ASTERISK stuff all about? ????

	cout << "a is: " << a << "\n";

	cout << "&a is: " << &a << "\n"; //what is THIS? (reference to Nightmare Before ...)

}


void blowMyComputerUp()
{
	while (true)
	{
		int* pInt = new int; //"dynamically" allocate 4 Bytes of memory - forever!

		delete pInt; //prevents the memory leak! (uncomment to see the "virus")
	}
}

int main()
{
	//demoBORINGPointerIntroduction(); 

	blowMyComputerUp(); 

	system("pause"); 

	Animal genericAnimal; 

	/*Derived objects (specific types of animals)*/
	Fox foxyFox; 

	HouseCat myCat; 

	WildCat wildCat; 

	vector<Animal> aZoo =
	{
		genericAnimal,
		foxyFox,
		wildCat
	};

	for (Animal currentAnimal : aZoo)
	{
		currentAnimal.makeSound(); 
	}

	cout << "Press any key to continue with the ADVANCED version of this program\n";
	cin.get(); //pause

	/*where we're EVENTUALLY going ...*/

	using pAnimal = Animal*; /*This is a "type alias" (a custom name for a data type)*/
	/*The asterisk means POINTER! (a memory address)*/

	vector<pAnimal> theZoo =
	{
		new HouseCat,
		new WildCat
	};

	for (pAnimal currentAnimal : theZoo)
	{
		currentAnimal->makeSound(); 
	}
	
	/*Note that this is a "leaky" program (use `delete` or "smart pointers" to plug the leaks)!*/
}

