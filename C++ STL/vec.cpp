#include<bits/stdc++.h>
#include<vector>

using namespace std;
/*class close  //without template
{
    public:
    int *arr;
    int size;
    close(int m)
    {
        size=m;
        arr=new int[size];
    }
    int dotproduct(close &v)
    {
        int d=0;
        for(int i=0;i<size;i++)
        {
            d+=this->arr[i]*v.arr[i];
        }
        return d;
    }
};
//with template
int main()
{
    close v1(3);
    v1.arr[0]=4;
    v1.arr[1]=3;
    v1.arr[2]=1;
    close v2(3);
    v2.arr[0]=1;
    v2.arr[1]=0;
    v2.arr[2]=1;
    int a=v1.dotproduct(v2);
    cout<<a;
}
template<class T>
class close
{
    public:
    T *arr;
    int size;
    close(int m)
    {
        size=m;
        arr=new T[size];
    }
    T dotproduct(close &v)
    {
        T d=0;
        for(int i=0;i<size;i++)
        {
            d+=this->arr[i]*v.arr[i];
        }
        return d;
    }
};
int main()
{
    close <float>v1(3);
    v1.arr[0]=4.6;
    v1.arr[1]=3.1;
    v1.arr[2]=1.09;
    close <float>v2(3);
    v2.arr[0]=1.11;
    v2.arr[1]=0;
    v2.arr[2]=1.89;
    float a=v1.dotproduct(v2);
    cout<<a;
}
*/
//for multiple datatypes like if i want T1 AND T2  T1 FOR DATA 1 AND T2 FOR DATA 2
template<class T1,class T2>
class Myclass
{
    public:
    T1 data1;
    T2 data2;
Myclass(T1 a,T2  b)
{
    data1=a;
    data2=b;
}
    void display()
    {
        cout<<this->data1<<endl<<this->data2;

    }
};
int main()
{
    Myclass<int,string>lol(1,"done");
    lol.display();
    return 0;
}