#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int>l1;
    list<int>l2(7);
        //cout<<l1.size();//displaying size of list
        //cout<<"\n"<<l2.size();
        // l1.push_back(9);
        // l1.push_back(10);
        // l1.push_back(2);
        // l1.push_back(3);
        // l1.push_back(4);


        //OR WE CAN ENTER THE ELEMENTS OF LIST BY
int ele,n;
cout<<"enter the size of LIST\n";
cin>>n;
for(int i=0;i<n;i++)
{cout<<"enter element\n";
    cin>>ele;
    l1.push_back(ele);
}
         

         //TO SORT THE ELEMENTS OF THE LIST WE CAN USE
         l1.sort();//sorts the element of the list




         list<int>::iterator it;
        it=l1.begin();

        
       // cout<<*it;//prints first position element
       // it++;//points to second ie 1 pos element;
        //cout<<"\n"<<*it;
        //Or we can display the list using for loop


        for(it=l1.begin();it!=l1.end();it++)
        {
            cout<<*it<<" ";
        }
//to delete element in a list
l1.pop_back();//deletes element from back
l1.pop_front();//deletes the front element 
//l1.remove(3);//deletes a particular element
cout<<"\n";
for(it=l1.begin();it!=l1.end();it++)
        {
            cout<<*it<<" ";
        }
}