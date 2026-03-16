#include "Animal.h"

#include<iostream> 

using namespace std;


void Animal::makeSound()
{
	int randomNumber = rand() % 100; 

	cout << "Generic animal ... making random number \"sound\" " << randomNumber << "\n";
}

void WildCat::makeSound()
{
	system("wildcat-ratatat.m4a");
}

void Fox::makeSound()
{
	system("start https://www.youtube.com/watch?v=jofNR_WkoCE"); 
}

void HouseCat::makeSound()
{
	system("popcornCat.wav");
}
