// Feb4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string> 


struct Person
{
    std::string name; //note the semicolon (not a comma)
    std::string isSenior;
    int height;
};


Person createAPerson()
{
    Person theCreatedPerson; 

    std::cout << "Enter the person's name:\n";
    std::getline(std::cin, theCreatedPerson.name);

    std::cout << "Now whether or not they are a senior (like in college) - YES OR NO!:\n"; 
    std::getline(std::cin, theCreatedPerson.isSenior);

    std::cout << "Now the height (in inches - NOT in feet inches)\n";


    std::string heightAsAString; 
    std::getline(std::cin, heightAsAString);

    theCreatedPerson.height = std::stoi(heightAsAString); 


    return theCreatedPerson;
}



int main()
{
    auto theCreatedPerson = createAPerson(); 

    std::cout << "The person that you created has the name: " << theCreatedPerson.name << "\n";

    //std::cout << theCreatedPerson << "\n";//C++, why ya gotta be so "extra"? 
    //this requires "operator overloading" (we'll talk about it later) 

}
