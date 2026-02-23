// Demoing ImageBMPClass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ImageBMP.h"

int main()
{
	ImageBMP imageBMP(256, 256, ColorEnum::Magenta);

	imageBMP.setPixelToColor_withThickness(100, 100, ColorEnum::Black, 10);

	std::string filename = "magenta256.bmp"; 

	imageBMP.writeImageFile(filename);

	std::system(filename.c_str());//c_str needed for system cmd

}

