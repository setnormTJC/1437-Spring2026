// Simple example of STRUCTURES.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

struct Apartment
{
    bool isMattressOnTheFloor = true; //SAD, lonely person 
    std::vector<std::string> listOfFurniture; //ex: couch, we're not going to go into details on furniture size, brand, etc.
    int number; //ex: 301B
};

/*deets is just a SILLY way of saying "details"*/
void printApartmentDeets(Apartment theApartment) //recall: theApartment is an arg.(ument) to a function (AKA: an input or parameter)
{
    std::cout << theApartment.isMattressOnTheFloor << "\n";
    for (int i = 0; i < theApartment.listOfFurniture.size(); ++i)
    {
        std::cout << theApartment.listOfFurniture[i] << " and this: "; 
    }
    std::cout << "\n";

    std::cout << theApartment.number << "\n";

}

int main()
{
    Apartment yourApartment =
    {
        false, //mattress is NOT on the floor
        {"table", "Gorilla Couch", "bed - which is NOT on the floor"},
        8675309
    };
    
    printApartmentDeets(yourApartment);
}
