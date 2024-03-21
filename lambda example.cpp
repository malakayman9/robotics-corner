#include<iostream>
#include <array>
#include<functional>
using namespace std;

int main(){

    array<int,5> arr={1,2,3,4,5};
    auto result = find_if(arr.begin(),arr.end(),[](int i){

return i>3;
    });
    cout<<*result;
}