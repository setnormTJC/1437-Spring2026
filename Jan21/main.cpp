/*This is a program that will read in all of your names and pick a random
name so that hopefully my students actually participate this semester 
(so that I can feel useful - AND so that students are actually learning)*/


#include <iostream>
#include"StudentThings.h"


int main()
{
    std::string filename = "C://Users//Work//Downloads//StudentRoster1437.csv";
    //NOTE: this is an example of an "absolute" filepath (as opposed to a relative path)
    
    auto listOfStudents = readStudentNamesFromFile(filename); 

    //auto means "automatically" figure out the correct data type 
    printStudentNames(listOfStudents); 

    
    logPresentStudentsToOutputFile(listOfStudents, "outfile.txt");
    
}
