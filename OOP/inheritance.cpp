#include<iostream>
using namespace std;

class Person{
public:
   Person()
   {
        name =" ";
        age =0;
   }
    Person(string name,int age):name(name),age(age)
    {

    }
   void set_name(string name)
   {
        this->name=name;
   }
   void set_age(int age)
   {
        this->age=age;
   }
   string get_name()
   {
        return name;
   }
   int get_age()
   {
        return age;
   }
private:
    string name;
    int age;

 };
 class Student :public Person
 {
public:
    Student()
    {
        id=0;
        GPA=0;
    }
    Student(string name,int age,int id,float GPA): Person(name,age),id(id),GPA(GPA)
    {

    }
    void set_id(int id)
   {
        this->id=id;
   }
   void set_GPA(float GPA)
   {
        this->GPA=GPA;
   }
   int get_id()
   {
        return id;
   }
   int get_GPA()
   {
        return GPA;
   }

private:
    int id;
    float GPA;


 };
class employee : public Person
{
public:
    void set_salary(int salary)
   {
        this->salary=salary;
   }
   void set_position(string position)
   {
        this->position=position;
   }
   int get_salary()
   {
        return salary;
   }
   string get_position()
   {
        return position;
   }


    private:
    float salary;
    string position;
};
int main()
{
    Person p1;
    p1.set_age(30);
    cout<<p1.get_age()<<endl;
    employee e1;
    e1.set_age(5);
    cout<<e1.get_age()<<endl;
    e1.set_salary(4000);
    cout<<e1.get_salary()<<endl;
    e1.set_position("magor");
    cout<<e1.get_position()<<endl;
}













// #include<iostream>
// using namespace std;

// class Complex
// {   public:
//     Complex(float r=0,float i=0) : real(r),img(i){}
    
//     Complex operator+(const Complex &obj) 
//     {
//         Complex result;
//         result.real=this->real +obj.real;
//         result.img=this->img +obj.img;
//         return result;
//     }
    
//     void display()
//     {
//         cout<<real<<" "<<"+i"<<img<<endl;
//     }


//     private:
//     float real;
//     float img;

// };
// int main(){

//     Complex c1(5,5);
//     Complex c2(5,5);
//     Complex c3= c1+c2;
//     c3.display();

// }