#include<bits/stdc++.h>

using namespace std;
template<class T1,class T2>
float add(T1 a,T2 b)
{
    float average;
    average=(a+b)/2.0;
    return average;
}
//similarly we can make for swap too
template<class t>
void swap1(t &a,t &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;

}
int main()
{
float a;
a=add(5,2.47);
cout<<a<<"\n";
int x=5,y=7;
swap1(x,y);
cout<<x<<"  "<<y;
}