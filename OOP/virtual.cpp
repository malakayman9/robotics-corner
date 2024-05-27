#include <iostream>

class Base
{
public:
Base()
{
    std::cout<<"Base constructor"<<std::endl;
};

virtual ~Base()
{
     std::cout<<"Base distructor"<<std::endl;
}
};

class Drived : public Base
{
public:
Drived()
{
    std::cout<<"drived constructor"<<std::endl;
}
~Drived()
{
    std::cout<<"drived distructor"<<std::endl;
}
 
};

int main()
{
    Base *base = new Base();
    delete base;

    Base *drived = new Drived();
    delete drived;

    std::cin.get();
    return 0;
}
