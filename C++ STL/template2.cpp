#include<bits/stdc++.h>

using namespace std;
template<class T1=int,class T2=char>
class Mysec
{public:
T1 a;
T2 b;
Mysec(T1 x, T2 y)
{
    a=x;
    b=y;
}
void display()
{
    cout<<"value of a "<<a<<"\n";
    cout<<"value of b "<<b<<"\n";
}
};
int main()
{
Mysec<>m(4,'c');//here it will going to take the default type int and char but if we spacify the type inside<> then it willl take that one
m.display();
cout<<"\n";
Mysec<float,int>g(4.567,100);
g.display();
}