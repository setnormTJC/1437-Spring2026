#include "StudentThings.h"

#include<fstream> 
#include <iostream>

std::vector<std::string> readStudentNamesFromFile(std::string filename)
{
    std::vector<std::string> studentNames;

    //fill 'er up!
    std::ifstream fin(filename);
    //csv is "comma-separated variables/values" and is EXTREMELY common
    //in "DATA ANALYTICS"

    if (!fin)
    {
        std::cout << "That file wasn't found\n";
        return {};
    }

    std::string currentStudentName; 

    while (std::getline(fin, currentStudentName))
    {
        studentNames.push_back(currentStudentName);
    }

    return studentNames;
}

void printStudentNames(const std::vector<std::string>& studentNames)
{

    for (std::string currentStudentName : studentNames) //range-based for loop 
        //an alternative to int i = 0; i < studentNames.size(); ++i
    {
        std::cout << currentStudentName << "\n";
    }
}
