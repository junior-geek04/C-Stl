#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
   // sort(a,a+n,greater<int>());//SORTS IN DESCENDING ORDER
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    //swap(a[1],a[3]);
    //************EXPLORE ALGORITHMS REFRENCE C++ TO KNOW ABOUT MORE FUNCTIONS
}
