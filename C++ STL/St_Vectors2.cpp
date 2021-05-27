#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{  
    vector<int> vec1;
vec1.push_back(5);
vec1.push_back(6);
vec1.push_back(7);
vector<int> vec2(vec1);
     vector<int> vec4(6,12);
    int n,ele;
    cout<<"enter the size of vector \n";
cin>>n;

for(int i=0;i<vec4.size();i++)
{
    cout<<vec4[i]<<" ";
}
cout<<"\n";
for(int i=0;i<vec2.size();i++)
{
    cout<<vec2[i]<<" ";
}
    return 0;
    
}
/*
// swap vectors
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main ()
{
  vector<int> foo (3,100);   // three ints with a value of 100
vector<int> bar (5,200);   // five ints with a value of 200

  foo.swap(bar);

  cout << "foo contains:";
  for (int i=0; i<foo.size(); i++)
    cout << ' ' << foo[i];
  cout << '\n';

  cout << "bar contains:";
  for (int i=0; i<bar.size(); i++)
    cout << ' ' << bar[i];
cout << '\n';

  return 0;
}
*/