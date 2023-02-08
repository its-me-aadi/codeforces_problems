#include <bits/stdc++.h>
using namespace std;
 
int main()
{ long int n;
  cin>>n;
  long int a;
  map<long long int,long long int> m;
  for(int i=0;i<n;++i)
    {cin>>a;
     ++m[a];    
    }
    auto it=m.begin();
    auto it2=m.end();
    --it2;
    if(m.size()==1)
     { 
        cout<<0<<" "<<(((*it).second)*((*it).second-1))/2<<"\n";
     }
    else{
        long long int a=((*it2).second)*((*it).second);
        long long int b=((*it2).first-(*it).first);
     cout<<b<<" "<<a<<"\n";
    }
    return 0;
}