#include <iostream>
#include "rec.h"
using namespace std;

Rectangle::Rectangle() : length(0), width(0)
{
    cout << "default constructor" << endl;
}
Rectangle::Rectangle(float len, float wid) : length(len), width(wid)
{
    cout << "paramatrized constructor" << endl;
}

Rectangle::~Rectangle()
{
    cout << "object life time ended" << endl;
}
void Rectangle::set_length(float l)
{
    if (l >= 0)
    {
        length = l;
    }
    else
    {
        cout << "length must be +ve" << endl;
    }
}

void Rectangle::set_width(float w)
{
    if (w >= 0)
    {
        width = w;
    }
    else
    {
        cout << "width must be +ve" << endl;
    }
}

float Rectangle::get_width()
{
    return width;
}

float Rectangle::get_length()
{
    return length;
}

float Rectangle::get_area()
{
    return length * width;
}
