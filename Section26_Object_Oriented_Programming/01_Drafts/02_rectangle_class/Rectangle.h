#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
private:
    double width;
    double height;

public:
    Rectangle(double width, double height);
    ~Rectangle();

    double getWidth() const;
    double getHeight() const;
    double getArea() const;
    double getPerimeter() const;
};

#endif // RECTANGLE_H
