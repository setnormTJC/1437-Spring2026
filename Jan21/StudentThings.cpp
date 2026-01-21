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


void logPresentStudentsToOutputFile(std::vector<std::string> studentNames, std::string outfileName)
{
    std::ofstream fout(outfileName);

    for (int index = 0; index < studentNames.size(); ++index)
    {
        std::cout << studentNames[index] << "\n";
        std::cout << "Does the teacher know this name (y/n)? \n";

        std::string response; 
        std::getline(std::cin, response);

        if (response == "yes" || response == "YES")
        {
            std::cout << "Cool - I know that name\n";
        }

        else //the response is presumably no  (or n)
        {
            std::cout << "Please tell us a bit about YOU\n"; 
            std::cout << "Ex: I like turtles\n";
        }

        std::cout << "Is the student here (y/n)?\n";

        std::string OTHERresponse; 
        std::getline(std::cin, OTHERresponse);

        if (OTHERresponse == "y")
        {
            fout << studentNames[index] << " WAS here on " << __TIMESTAMP__ << "\n";
        }
        //we'll write to the output file next time

    }
}
