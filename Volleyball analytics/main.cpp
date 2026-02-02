/*
* Data was taken from: 
* https://www.apacheathletics.com/sports/wvball/2025-26/roster
*/

#include <iostream>

#include"VolleyballHelperFunctions.h"


int main()
{

    std::string filename = "someVolleyballStats.csv";


    

    //printVolleyballFileContents(filename);

    auto volleyballRecords = getVolleyBallRecordsFromFile(filename); 


    std::cout << volleyballRecords[0].playerName << "\n";

    //std::cout << "Hello World!\n";
}

