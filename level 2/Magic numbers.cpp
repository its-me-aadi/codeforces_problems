#include <iostream>
using namespace std;
 
int main()
{ string s;
  cin>>s;
  if(s[0]=='1')
  { int t=1;
       while(s[t]!='\0')
      { if(s[t]=='1' || s[t]=='4') 
        { if(s[t]=='4' && s[t+1]=='4' && s[t+2]=='4')
           {cout<<"NO"; return 0;}
            
        }
        else
         {cout<<"NO"; return 0;}
         ++t;
          
      }
      cout<<"YES";
  }
  else
  cout<<"NO";
  
    
    return 0;
}