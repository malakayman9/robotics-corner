#include<iostream>
using namespace std ;

void sum_product(int x,int y,int &sum,float &product);

int main ()
{
    int x , sum , y ;
    float product;
    cout<<"plz enter two numbers"<<endl;
    cin>>x>>y;
    sum_product(x,y,sum,product);
    cout <<"the sum of the two numbers = "<<sum<<endl;
    cout <<"the product of the two numbers = "<<product<<endl;
   
} 

void sum_product(int x,int y,int &sum,float &product){
    sum = x+y;
    product = x*y;

}
