#include <iostream>
using namespace std;

int linear_search(int arr[], int key)
{

    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int x[5] = {1, 2, 3, 4, 5};

    int num = linear_search(x, 3);
    cout << num;
}