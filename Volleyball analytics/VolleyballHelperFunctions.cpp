#include "VolleyballHelperFunctions.h"


#include<fstream> 
#include <iostream>
#include <iomanip>

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

void printVolleyballRecords(std::vector<VolleyballRecord> volleyballRecords)
{

	const int NAME_COLUMN_WIDTH = 15; 
	const int HEIGHT_COLUMN_WIDTH = 15;
	const int HOME_COLUMN_WIDTH = 15; 

	//print column headers: 
	std::cout << std::left << std::setw(NAME_COLUMN_WIDTH) << "NAME";
	std::cout << std::left << std::setw(HEIGHT_COLUMN_WIDTH) << "HEIGHT (inches)";
	std::cout << std::left << std::setw(HOME_COLUMN_WIDTH) << "HOME";
	std::cout << "\n";

	//print data of interest ("actual data"): 
	for (VolleyballRecord volleyballRecord : volleyballRecords)
	{
		std::cout << std::left << std::setw(NAME_COLUMN_WIDTH) << volleyballRecord.playerName;
		std::cout << std::left << std::setw(HEIGHT_COLUMN_WIDTH) << volleyballRecord.height;
		std::cout << std::left << std::setw(HOME_COLUMN_WIDTH) << volleyballRecord.homeplace; 
		//etc.
		std::cout << "\n";
	}
}
