// Feb9-first day on CLASS keyword.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


class Barbarian
{
    //remember, all members of a CLASS are PRIVATE by default: 
private: 
    std::string name = "Joe";
    int health; 
    //int power; //the amount of damage the Barbarian can do (roughly - ignoring "defense" stuff)
    bool isImmortal; 


public: 
    Barbarian() = default; 
    Barbarian(std::string nameGivenInMainFunction, int healthGivenInMainFunction, bool isImmortal_fromMainFunction)
    {
        name = nameGivenInMainFunction; 
        health = healthGivenInMainFunction; 
        isImmortal = isImmortal_fromMainFunction;
    }

    void setHealth(int healthSpecifiedInMain)
    {
        health = healthSpecifiedInMain; 
    }

    void attack(Barbarian& theBarbarianToAttack) //note the ampersand! ("pass by reference")
    {
        theBarbarianToAttack.health -= 10; 
    }

    void printBarbarianAttributes()
    {
        std::cout << std::boolalpha; //this makes 0 get printed as "false" (or 1 gets printed as "true")
        std::cout << name << "\t" << health << "\t" << isImmortal << "\n"; //remember, bools get printed as 0 or 1
    }
};


/*The two print functions down below are called "overloaded" functions (they take different data types as inputs).*/
void print(int a)
{
    std::cout << a << "\n";
}

void print(std::string word)
{
    std::cout << word << "\n";
}

int main()
{

    Barbarian genericBarbarian;

    int health = 100; 
    genericBarbarian.setHealth(health);

    genericBarbarian.printBarbarianAttributes(); 

    Barbarian specificBarbarian("NOT Joe", 142, true);


    genericBarbarian.attack(genericBarbarian); 

    genericBarbarian.printBarbarianAttributes();

    specificBarbarian.printBarbarianAttributes(); 

    



    //someBarbarian.name = "adsflksdlkadlkdsa";


    //std::cout << "Hello World!\n";
}

