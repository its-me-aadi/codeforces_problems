#include <iostream>
 
using namespace std;
 
int main()
{ int n;
  cin>>n;
  int a[n],n5=0;
  for(int i=0;i<n;++i)
    {cin>>a[i];
    if(a[i]==5)
        ++n5;
    }
    int r=n-n5;
    n5-=n5%9;
    if(n5!=0 && r!=0)
    {for(int i=0;i<n5;++i)
     cout<<"5";
    for(int i=0;i<r;++i)
     cout<<"0";}
     else if(n5==0 && r!=0)
     cout<<"0";
     else
     cout<<"-1";
     
    return 0;
}