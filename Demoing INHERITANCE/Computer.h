#pragma once
class Computer
{
private: 
	std::string cpuName; 
	float teraflops; //ex: 4.5 for  Radeon 780M
};

/*how do we indicate that one class INHERITS attributes from another*/

class PersonalComputer : public Computer//single colon used here means "inherits from"
{
	std::string monitorName; //ex: ASUS blah blah 
};

class SmartPhone : public Computer
{
	float batteryLife; //ex: 6 hours (depending on what you are doing) 
};

class GameConsole : public Computer
{
	int controllerCount; 
};
