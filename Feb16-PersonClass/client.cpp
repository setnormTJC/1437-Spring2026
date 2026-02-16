// Feb16-PersonClass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"Person.h"

//why double quotes instead of angle brackets (ex: <iostream>)
//ask AI about it (OR ask me after I'm done talking)

int main()
{
    //std::cout << "Hello World!\n";

    Person me(37, HairType::LONG, "Sepharoo");

    me.print(); 

    Person someoneElse (123, HairType::SHORT, "A very old person");

    someoneElse.print(); 
}
