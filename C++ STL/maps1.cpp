#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{map<string,int> m;
//if we would have assigned
//  m["Divyansh"]=80;
//  m["Sarthak"]=90;
//  m["Prashant"]=100;
int n,marks;
string name;
cout<<"Enter the number of students whom you want to display"<<"\n";
cin>>n;

map<string,int>::iterator iter;
//****************INSERTING ELEMENTS FROM USER*****************
for(int i=0;i<n;i++)
{
cin>>name;
cin>>marks;
    m.insert(pair<string,int>(name,marks));
}
for(iter=m.begin();iter!=m.end();iter++)
{
    cout<<(*iter).first<<" "<<(*iter).second<<"\n";//displaying
}
//to print siz eof map
cout<<m.size()<<"\n";
//cout<<m.max_size()<<"\n";
//cout<<m.empty()<<"\n";//prints 0 if empty nahi hai

}