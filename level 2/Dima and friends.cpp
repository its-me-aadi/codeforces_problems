#include <iostream>
 
using namespace std;
 
int main()
{ int n;
  cin>>n;
  int a[n],s=0,t=0;
  for(int i=0;i<n;++i)
  {cin>>a[i];
    s+=a[i];
  }
  s=s%(n+1);
  for(int i=1;i<=5;++i)
  { if((s+i)%(n+1)!=1)
      ++t;
  }
  cout<<t;
    return 0;
}