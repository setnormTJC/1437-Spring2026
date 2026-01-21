#pragma once


#include<string> 
#include <vector>


std::vector<std::string> readStudentNamesFromFile(std::string filename);

void printStudentNames(const std::vector<std::string>& studentNames); //abstraction