#include<iostream>
#include <array>
#include<functional>
using namespace std;

void foreach(array<int,5> arr , function<void (int) >func)  //void(*func)(int)
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
    int i=5;
    auto lambda = [i](int value) mutable{
        i=3;
        cout<<value*i<<endl;
    };
    foreach(arr,lambda);


    cout<<i<<endl;
    
    return 0;
}