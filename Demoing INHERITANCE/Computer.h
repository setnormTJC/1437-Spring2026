#pragma once
#include <string>
class Computer
{
//private: 
	//new access modifier/specifier: 
protected: 
	std::string cpuName; 
	float teraflops; //ex: 4.5 for  Radeon 780M
public: 

	Computer() = delete; 
	Computer(std::string cpuName, float teraflops); //function declaration (NOT a definition) 
};

/*how do we indicate that one class INHERITS attributes from another*/

class PersonalComputer : public Computer//single colon used here means "inherits from"
{
	std::string monitorName; //ex: ASUS blah blah 

public: 
	PersonalComputer() = delete; 
	PersonalComputer(std::string cpuName, float teraflops, std::string monitorName); 
};

class SmartPhone : public Computer
{
	float batteryLife; //ex: 6 hours (depending on what you are doing) 
};

class GameConsole : public Computer
{
	int controllerCount; 
};
