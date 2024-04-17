#include<iostream>
using namespace std;
class Employee
{
    private:
    string name;
    int emp_id;
    double salary;
    
    public:
    Employee()
    {
        name=" ";
        emp_id=0;
        salary=0;

    }
  
    double get_total_salary(){}
    void print(){}

};
class Sales :public Employee
{
    private:
    float gross_sales;
    float commrtial_rate;
    
    public:
    Sales()
    {
        
        gross_sales=0;
        commrtial_rate=0;

    }
  
    double set_gross_sales(){}
    float set_commrtial_rate(){}

};
class Engineer :public Employee
{
    private:
    string specialty;
    int exp;
    int overtime_hours;
    float overtime_hour_rate;
    
    public:
    Engineer()
    {
        specialty=" ";
        exp=0;
        overtime_hours=0;
        overtime_hour_rate=0;

    }
  
    double set_overtime_hours(){}
    float set_overtime_hour_rate(){}

};
int main()
{
    
}