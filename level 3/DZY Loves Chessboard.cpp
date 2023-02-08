#include <iostream>
 
using namespace std;
 
int main()
{ int n,m;
  cin>>n>>m;
  char a[n][m];
  for(int i=0;i<n;++i)
  { for(int j=0;j<m;++j)
      {     cin>>a[i][j];
            if(a[i][j]=='-')
                cout<<"-";
            else
            {   if(i%2==0)
                {   if(j%2==0)
                        cout<<"B";
                    else
                        cout<<"W";
                }
                else{
                    if(j%2!=0)
                        cout<<"B";
                    else
                        cout<<"W";
                    }
            }
        }
    cout<<"\n";    
    }
    return 0;
}