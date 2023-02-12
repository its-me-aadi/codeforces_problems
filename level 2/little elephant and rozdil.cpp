#include <iostream>
 
using namespace std;
 
int main()
{ long int n;
   cin>>n;
   long long int a[n];
   for(long int i=0;i<n;++i)
     cin>>a[i];
     long long int x=a[0];
     long int position=1;
   for(long int i=1;i<n;++i)
   { if(a[i]<x)
      {x=a[i]; position=i+1;}
   }
   int dupli=0;
   for(long int i=0;i<n;++i)
   { if(a[i]==x)
       ++dupli;
      if(dupli>=2)
       { cout<<"Still Rozdil";
           break;}
   }
   if(dupli<2)
     cout<<position;
    return 0;
}