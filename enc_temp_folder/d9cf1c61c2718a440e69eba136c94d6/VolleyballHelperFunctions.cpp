#include "VolleyballHelperFunctions.h"


#include<fstream> 
#include <iostream>

void printVolleyballFileContents(std::string filename)
{
	std::ifstream fin(filename); 

	if (!fin)
	{
		std::cout << filename << " not found\n";
		return; 
	}

	std::string currentLine; 
	while (std::getline(fin, currentLine))
	{
		std::cout << currentLine << "\n";
	}
}

std::vector<VolleyballRecord> getVolleyBallRecordsFromFile(std::string filename)
{
	std::vector<VolleyballRecord> volleyBallRecords;


	//fill 'er up!
	std::ifstream fin(filename);

	if (!fin)
	{
		std::cout << filename << " not found\n";
		return {};
	}

	//std::string currentToken; 
	while (!fin.eof()) //end of file
	{
		VolleyballRecord currentRecord; 

		fin >> currentRecord.playerName >> currentRecord.homeplace >> currentRecord.height >> currentRecord.killsPerSet; 

		volleyBallRecords.push_back(currentRecord);

	}
	//while (std::getline(fin, currentToken, ',')) //an alternative approach



	return volleyBallRecords; 
}
