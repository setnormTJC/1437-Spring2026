#include "Computer.h"

Computer::Computer(std::string cpuName, float teraflops)
	: 
	cpuName(cpuName), teraflops(teraflops)
{
}

PersonalComputer::PersonalComputer(std::string cpuName, float teraflops, std::string monitorName)
	:
	Computer(cpuName, teraflops), 
	monitorName(monitorName)
{
}
