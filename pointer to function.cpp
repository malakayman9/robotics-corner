#include<iostream>
using namespace std;
#include <array>


// void hallo(int x){
// cout<<"hallo";
// }

void printvalues(int value)
{
    cout<<value*2<<endl;
}

void foreach(array<int,5> arr , void(*func)(int))
{   
    for(auto i:arr)
    {
        func(i);

    }
    
}

int main ()
{
    // void (*function)(int)=hallo;
    // //auto function = hallo;
    // function(10);

    array<int,5> arr={1,2,3,4,5};
    foreach(arr,printvalues);



    return 0;
}