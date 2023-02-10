#include <iostream>
using namespace std;
 
int main()
{ long int n,m;
  cin>>n>>m;
  long int a[m];
  for(long int i=0;i<m;++i)
    cin>>a[i];
    long long int t=a[0]-1;
  for(long int i=1;i<m;++i)
    {if(a[i]<a[i-1])
      t+=n-a[i-1]+a[i];
     else
      t+=a[i]-a[i-1];
    }
    cout<<t;
    
    return 0;
}