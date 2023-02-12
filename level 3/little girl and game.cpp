#include <bits/stdc++.h>
using namespace std;
 
int main()
{ string s;
  cin>>s;
  map<char,int> m;
  int t=0;
  for(int i=0;i<s.size();++i)
   ++m[s[i]];
  for(auto pr:m)
  { if(pr.second%2!=0)
      ++t;
  }
  if(t==0 || t==1 ||t%2!=0)
   cout<<"First"<<"\n";
  else
   cout<<"Second"<<"\n";
    return 0;
}