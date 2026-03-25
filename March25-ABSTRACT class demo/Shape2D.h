#pragma once //what's this all about? (prevention of including this header file more than once (ex: in a complicated project)


//pragma means "pragmatic"

class Shape2D
{
public: 
	virtual int calculateArea() const = 0; //the virtual and the = 0 makes this function a "pure" virtual function
	//any class with a "pure virtual" function is called an "abstract" class

};

class Triangle : public Shape2D //inheritance! yaya
{
public: 
	float base, height; 

	int calculateArea() const override; 
};

class Rectangle : public Shape2D
{
public: 
	float length, width; 

	int calculateArea() const override; 
};