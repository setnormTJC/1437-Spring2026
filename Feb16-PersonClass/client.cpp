// Feb16-PersonClass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream> //angle brackets
#include"Person.h" //
#include "Animal.h"
/*These header files can be described as "dependencies" (or, loosely speaking, "libraries"*/


//why double quotes instead of angle brackets (ex: <iostream>)
//ask AI about it (OR ask me after I'm done talking)

int main() //main is acting as a "client" that gets served "goodies" by the dependencies
{
    //std::cout << "Hello World!\n";

    Person me(37, HairType::LONG, "Sepharoo");

    me.print(); 

    Person someoneElse (123, HairType::SHORT, "A very old person");

    someoneElse.print();


    Animal fox(4.0f, "foxy fox");

    fox.print(); 
}
