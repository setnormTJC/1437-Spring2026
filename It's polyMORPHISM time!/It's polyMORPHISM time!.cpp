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

/*https://www.youtube.com/watch?v=BXx0c2jg5eM*/
void demoPolymorphism()
{
	Animal* pGenericAnimal = new Animal;

		/*Derived objects (specific types of animals)*/
	Fox* pFoxyFox = new Fox; 

	HouseCat* pMyCat = new HouseCat; 

	WildCat* pWildCat = new WildCat; 

	vector<Animal*> pZoo =
	{
		pGenericAnimal,
		pFoxyFox,
		pWildCat
	};

	for (Animal* pCurrentAnimal : pZoo)
	{
		pCurrentAnimal->makeSound(); //note the "arrow operator"!

		cout << "Press any key to continue makin' sounds!\n";
		cin.get(); //pause

	}

	/*Note that this is a "leaky" program (use `delete` or "smart pointers" to plug the leaks)!*/
}


//void demoShallowCopy()
//{
//	Animal animal;
//
//	animal.name = "Zeus Olympus";
//
//	Animal otherAnimal = { "Bill Butcher" }; //note the alternative, convenient syntax ("initializer list")
//
//	vector<Animal> animals =
//	{
//		animal,
//		otherAnimal
//	};
//
//	//suppose Zeus gets married and changes his last name
//	animal.name = "Zeus Seuss"; //Hera Seuss? 
//
//
//	cout << "Animal's name is: " << animal.name << "\n";
//
//	cout << "And the LIST of animals' names is: " << "\n";
//
//	for (Animal currentAnimal : animals)
//	{
//		cout << currentAnimal.name << "\n";
//	}
//}


void demoDEEPCopy()
{
	Animal* pFirstAnimal = new Animal; 
	pFirstAnimal->name = "Seth Norman"; //note the use of the "arrow operator" (NOT the dot !) 


	Animal* pSecondAnimal = new Animal; //new "dynamically allocates" RAM space for our variable (whatever THAT means...)
	pSecondAnimal->name = "Taylor Swift";


	vector<Animal*> pAnimals =
	{
		pFirstAnimal,
		pSecondAnimal
	};

	//Seth gets married - hooray! (except > 50% of marriages ...) 

	pFirstAnimal->name = "Seth Swift"; //hooray for alliteration!


	cout << "First animal's name is: " << pFirstAnimal->name << "\n";
	for (Animal* pCurrentAnimal : pAnimals)
	{
		cout << pCurrentAnimal->name << "\n";
	}

}

int main()
{
	//demoPolymorphism(); 

	int a = 1; 
	int* pA = &a; 

	int b = 4; 
	int* pB = &b; 


	cout << pA << "\n";

	cout << *pA + *pB << "\n"; //the asterisks here are the "get the contents of" operator (AKA: dereferencing operator)
	
	//demoBORINGPointerIntroduction(); 

	//blowMyComputerUp(); 	

	//demoShallowCopy(); 

	//demoDEEPCopy(); 

}

