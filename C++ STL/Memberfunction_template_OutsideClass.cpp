#include<bits/stdc++.h>

using namespace std;
template<class t>
class enjoy
{public:
t data;
enjoy(t a)
{
    data=a;
}
void display();

};
template<class t>
void enjoy<t>::display()
{
    cout<<data;
}
int main()
{
    enjoy<int> e(94);
    cout<<e.data<<"\n";
    e.display();
}