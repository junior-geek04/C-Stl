#include<bits/stdc++.h>

using namespace std;
class LOL
{
    public:
    int *arr;
    int size;
    LOL(int m)
    {
        size=m;
        arr=new int[size];
    }
    int dotproduct(LOL&v)
    {
        int d=0;
        for(int i=0;i<size;i++)
        {
            d+=this->arr[i]*v.arr[i];
        }
        return d;
    }
};
int main()
{
    LOL v1(3);
    v1.arr[0]=4;
    v1.arr[1]=3;
    v1.arr[2]=1;
    LOL v2(3);
    v2.arr[0]=1;
    v2.arr[1]=0;
    v2.arr[2]=1;
    int a=v1.dotproduct(v2);
    cout<<a;
}