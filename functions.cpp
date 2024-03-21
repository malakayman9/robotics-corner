#include<iostream>
using namespace std;

int add(int x,int y=5,int z=6){

    return x+y+z;
}
inline void print(string str){
cout<<str<<endl;
}

int main(){
int x=5,y=10,z;
cout<<add(x,y)<<endl;

string str="malak";
print(str);
}
