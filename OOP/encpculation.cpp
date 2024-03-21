#include<iostream>
using namespace std ;
class rectangle 
{   
private:
    float length;
    float width;
public:
    void set_length(float l)
    {
        if (l>=0)
        {
            length =l;
        }
        else
        {
            cout<<"length must be +ve"<<endl;
        }
    }

 void set_width(float w)
    {
        if (w>=0)
        {
             width=w;
        }
        else
        {
            cout<<"width must be +ve"<<endl;
        }
    }

float get_width()
    {
        return width;
    }

float get_length()
    {
        return length;
    }

float  get_area()
    {
        return length*width;
    }   

};

int main() {
    rectangle r1;
    r1.set_length(5);
    r1.set_width(5);
    cout<<r1.get_area();

    return 0;
}