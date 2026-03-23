#include "Rectangle.h"

Rectangle::Rectangle(double width, double height)
    : width(width), height(height)
{
}

Rectangle::~Rectangle()
{
}

double Rectangle::getWidth() const
{
    return width;
}

double Rectangle::getHeight() const
{
    return height;
}

double Rectangle::getArea() const
{
    return width * height;
}

double Rectangle::getPerimeter() const
{
    return 2 * (width + height);
}
