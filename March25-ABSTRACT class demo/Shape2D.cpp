#include "Shape2D.h"

int Triangle::calculateArea() const
{
    return 0.5f * base * height; 
}

int Rectangle::calculateArea() const
{
    return length * width;
}
