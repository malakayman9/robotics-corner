#include <iostream>
using namespace std;

int binary_search(int arr[], int left,int right,int key)
{
    int middel=(left+right)/2;
    while (left<=right)
    {
        if(arr[middel]==key)
        {
            return middel;
        }
        if(key<arr[middel])
        {
            right=middel-1;
            middel=(left+right)/2;
        }
        else
        {
            left=middel+1;
            middel=(left+right)/2;
        }
    }
    
   
    return -1;
}

int main()
{
    int x[] = {1, 2, 3, 4, 5,6,7,8,9,20,30,40};
    int size = sizeof(x)/sizeof(x[0]);
    int left=0;
    int right=size-1;
    int key=20;
    int result= binary_search(x,left,right,key);
    if (result==-1)
    {
        cout<<"the key is not found"<<endl;
    }
    else
    {
        cout<<"the index of number "<<x[result]<<" is "<<result;
    }
    
    
}



