#include <bits/stdc++.h>
using namespace std;
 
int main()
{   int n,t=0,a;
    cin>>n;
    map<int,set<int>> m;
    map<int,int> m2;
    for(int i=0;i<n;++i)
    { cin>>a;
      m[a].insert(i);
    }
    for(auto pr:m)
    { 
        if((pr.second).size()==1)
            {m2[pr.first]=0;
              ++t;    
            }
        else{   
                set<int>s;
                auto it=(pr.second).begin();
                auto it2=(pr.second).begin();
                ++it2;
                for(it;it!=(pr.second).end();++it)
                    {  if(it2!=(pr.second).end())
                            s.insert((*it2)-(*it));
                        ++it2;
                    }
                auto it3=s.begin();
                if(s.size()==1)
                { m2[pr.first]=(*it3);
                    ++t;
                }
        }
    }
    cout<<t<<"\n";
    for(auto pr2:m2)
    cout<<(pr2).first<<" "<<(pr2).second<<"\n";
    return 0;
}