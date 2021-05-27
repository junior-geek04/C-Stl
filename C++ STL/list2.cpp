#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int>l1;
    list<int>l2;
        


        
int ele,n,n1;
cout<<"enter the size of LIST L1\n";
cin>>n;
for(int i=0;i<n;i++)
{cout<<"enter element\n";
    cin>>ele;
    l1.push_back(ele);
}

cout<<"enter the size of LIST L2\n";
cin>>n1;
for(int i=0;i<n1;i++)
{cout<<"enter element\n";
    cin>>ele;
    l2.push_back(ele);
}
         
//*****NOW WE WILL MERGE TWO LISTS***********
        




         list<int>::iterator it;
        it=l1.begin();
        it=l2.begin();

        
      


        for(it=l1.begin();it!=l1.end();it++)
        {
            cout<<*it<<" ";
        }
        cout<<"\n";
// l1.insert(it,34);
// cout<<"AFTER INSERTING";
// for(it=l1.begin();it!=l1.end();it++)
//         {
//             cout<<*it<<" ";
//         }
// cout<<"\n";
for(it=l2.begin();it!=l2.end();it++)
        {
            cout<<*it<<" ";
        }

        //MERGING THE LISTS 
        cout<<"\n"<<"After merging L1 and L2 \n";
        l1.merge(l2);
        l1.sort();//we also sorted them
        
        for(it=l1.begin();it!=l1.end();it++)
        {
            cout<<*it<<" ";
        }
        cout<<"\n";
//NOW WE WILL REVERSE THE MERGED LIST
l1.reverse();

        for(it=l1.begin();it!=l1.end();it++)
        {
            cout<<*it<<" ";
        }
        
}
/*
********FULL INSERTION PROGRAM*******

#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int>l1;
    list<int>l2;
        


        
int ele,n,n1;
cout<<"enter the size of LIST L1\n";
cin>>n;
for(int i=0;i<n;i++)
{cout<<"enter element\n";
    cin>>ele;
    l1.push_back(ele);
}

list<int>::iterator it;
        it=l1.begin();
        l1.push_back(34);
for(it=l1.begin();it!=l1.end();it++)
        {
            cout<<*it<<" ";
        }
        cout<<"\n";
}*/