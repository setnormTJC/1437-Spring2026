// Demoing ImageBMPClass.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ImageBMP.h"

#include<Windows.h> //gives access to the SLEEEP function 
//#include "ImageBMP.h"

void firstDemoOfImageBMPClass()
{
	ImageBMP imageBMP(500, 500, ColorEnum::Yellow);


	imageBMP.setPixelToColor_withThickness(100, 200, ColorEnum::Black, 10);

	std::string filename = "frankiesFavouriteColour_withABlackSquare.bmp";

	imageBMP.writeImageFile(filename);

	std::system(filename.c_str());

}

int main()
{
	ImageBMP imageBMP2("cat puppy pose.bmp");


	imageBMP2.fillRectangleWithColor(10, 10, 200, 100, ColorEnum::Cyan);

	std::string filename = "catsWithARectangle.bmp";
	imageBMP2.writeImageFile(filename); 

	std::system(filename.c_str()); //a convenience (automatically opens the image file after writing is finished)
	//a "C-string" comes from the C language and returns a pointer (a memory address)

	Sleep(2'000); 

	
	ImageBMP imageBMP(256, 256, ColorEnum::Magenta);
	//imageBMP.re
	imageBMP.setPixelToColor_withThickness(100, 100, ColorEnum::Black, 10);

	std::string filename2 = "magenta256.bmp"; 

	imageBMP.writeImageFile(filename2);

	std::system(filename2.c_str());//c_str needed for system cmd

}

