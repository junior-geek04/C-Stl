
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{  //cout<<"yes";
    vector<int> vec1;
    
    int n,ele;
    cout<<"enter the size of vector \n";
cin>>n;
for(int i=0;i<n;i++)
{cout<<"enter element \n ";
    cin>>ele;
    vec1.push_back(ele);
}
//cout<<vec1.size();
//to print the vector Or array
vec1.pop_back(); 

for(int i=0;i<vec1.size();i++)
{
    cout<<vec1[i]<<" ";//printing before insertion
}
cout<<"\n";
//Now inserting an element
vector<int> :: iterator ite=vec1.begin();
vec1.insert(ite,5);
//vec1.insert(ite+1,5);//to insert at second position
//vec1.insert(ite,1000,5);//here 4 represents number of copies to be inserted like 1 5 5 5 5 6 7  4 copies of 5 is inserted
for(int i=0;i<vec1.size();i++)
{
    cout<<vec1[i]<<" ";
}
cout<<"\n";
//to find element at particular position
cout<<vec1.at(0);
    return 0;
    
}

//for char vector is as follows

/*#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{  //cout<<"yes";
    vector<char> vec1;
    
    int n;
    char ele;
    cout<<"enter the size of vector \n";
cin>>n;
for(int i=0;i<n;i++)
{cout<<"enter element \n ";
    cin>>ele;
    vec1.push_back(ele);
}
//cout<<vec1.size();
//to print the vector Or array
//vec1.pop_back();

for(int i=0;i<vec1.size();i++)
{
    cout<<vec1[i]<<" ";//printing before insertion
}
cout<<"\n";
//Now inserting an element
vector<char> :: iterator ite=vec1.begin();
vec1.insert(ite,'a');
//vec1.insert(ite+1,5);//to insert at second position
//vec1.insert(ite,1000,5);//here 4 represents number of copies to be inserted like 1 5 5 5 5 6 7  4 copies of 5 is inserted
for(int i=0;i<vec1.size();i++)
{
    cout<<vec1[i]<<" ";
}
cout<<"\n";
//to find element at particular position
cout<<vec1.at(0);
    return 0;
    
}
*/