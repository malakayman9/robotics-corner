#include<iostream>
using namespace std ;
class Rectangle 
{   
private:
    float length;
    float width;
public:
Rectangle() ;
Rectangle(float len,float wid) ;  
~Rectangle();
void set_length(float l); 
 void set_width(float w);
float get_width();
float get_length();
float  get_area();
};