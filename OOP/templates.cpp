// #include<iostream>
// using namespace std;
// template <typename T>
// void swap(T *a ,T *b)
// {
//     T temp =*a;
//     *a=*b;
//     *b=temp;

// }
// int main ()
// {
//     int x=5;
//     int y=10;
//     swap(&x,&y);
//     cout<<x<<" "<<y<<endl;
// }

#include<iostream>
using namespace std;
#include<vector>
int main()
{
    vector<pair<int, pair<string,double>>> vp;
    vp.push_back(make_pair(1,make_pair("malak",1234)));
    for(int i=0;i<vp.size();i++)
    {
        cout<<vp[i].first<<" "<<vp[i].second.first<<" "<<vp[i].second.second<<endl;
    }
    return 0;
}


