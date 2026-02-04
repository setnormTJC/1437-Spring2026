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

    //std::cout << volleyballRecords[0].playerName << "\n";

    printVolleyballRecords(volleyballRecords); 



    //calc avg height: 
    float sumOfAllHeights = 0.0; 

    for (int i = 0; i < volleyballRecords.size(); ++i)
    {
        int heightOfCurrentPlayer = volleyballRecords[i].height;
        sumOfAllHeights += heightOfCurrentPlayer; 
    }

    float averageHeight = sumOfAllHeights / volleyballRecords.size(); 
    std::cout << "Average height = " << averageHeight << "\n";//SANITY CHECK: should NOT be 10000000000 inches
}

