#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{long long int n,m,end=0,front=0;
  cin>>n;
  long int a[n],index[100005];
  for(long int i=0;i<n;++i)
    {cin>>a[i];
      index[a[i]]=i+1;      
    }
   cin>>m;
   long int b[m];
   for(long int i=0;i<m;++i)
    {cin>>b[i];
        front+=index[b[i]];
        end+=n-index[b[i]]+1;
    }
    cout<<front<<" "<<end;
  return 0;
}