#include<iostream>
using namespace std;
class Shape{
   
    public:
    virtual void area (){
        cout <<"area of shape";
    }

};
class Rectangle : public Shape{
    private:
    float len;
    float wid;
    public:
    void area (){
        cout <<len *wid;
    }

};
class Circle : public Shape{
    private:
    float red;
    float pi=3.14;
    public:
    void area (){
        cout << pi*red*red;
    }

};
int main()
{
    Shape sh;
    Shape *shape_ptr;
    shape_ptr=&sh;

}