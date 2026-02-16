// Feb9-first day on CLASS keyword.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>


class Barbarian
{
    //remember, all members of a CLASS are PRIVATE by default: 
private: //member variables
    std::string name = "Joe";
    int health{}; //the braces initialize the health to 0
    //int power; //the amount of damage the Barbarian can do (roughly - ignoring "defense" stuff)
    bool isImmortal{}; //braces here iniitalize the boolean to FALSE (I think)


public: 

    //member functions
    Barbarian() = default; 
    Barbarian(std::string nameGivenInMainFunction, int healthGivenInMainFunction, bool isImmortal_fromMainFunction)
    {
        name = nameGivenInMainFunction; 
        health = healthGivenInMainFunction; 
        isImmortal = isImmortal_fromMainFunction;
    }

    /*This plays a lil clip from the well-known game Elden Ring (for funsies)*/
    void roar()
    {
        roarHelper(); 
    }

    /*"setter" functions are also called "mutators"*/
    void setHealth(int healthSpecifiedInMain)
    {
        health = healthSpecifiedInMain; 
    }

    /*a "getter" function is also called an "accessor" function*/
    std::string getName() const //this is often called a function signature (or header)
    {
        //whoops, I changed my mind, henceforth barbarian's name will be MOE
       //ame = "MOE"; //remember = means ASSIGN the value on the right to the variable on the left
        //== (equality opeartor)

        return name; 
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

private: 
    void roarHelper()
    {
        std::system("start https://www.youtube.com/shorts/_SsdA9aANKo");
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

void demoASmallPointAboutPointers()
{
    //int char float return void if class //these all "reserved word" (AKA: keyword)
    std::vector<Barbarian*> theBarbarianCrew;

    Barbarian barbarianJoe; //this calls the "default" constructor of the Barbarian class

    Barbarian specificBarbarian("NOT Joe", 142, true); //THIS calls the "parameterized constructor"

    theBarbarianCrew.push_back(&barbarianJoe); //& means the ADDRESS OF barbarian Joe
    theBarbarianCrew.push_back(&specificBarbarian);

    int health = 100;
    barbarianJoe.setHealth(health); //set to 100

    barbarianJoe.attack(barbarianJoe);

    for (int i = 0; i < theBarbarianCrew.size(); ++i)
    {
        theBarbarianCrew[i]->printBarbarianAttributes(); //was barbarianJoe's health updated to 100? 
    }

}

int main() //main is often called a "client" of the Barbarian class
{


    

    //someBarbarian.name = "adsflksdlkadlkdsa";


    //std::cout << "Hello World!\n";
}

