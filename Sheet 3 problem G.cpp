// prepared by @Mahin

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,f=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<=n/2;i++)
    {
          if(a[i]!=a[n-i-1])
              {
                f=1;
                break;
              }
    }
    if(f==1)
        {
            cout<<"NO";
        }
    else 
        cout<<"YES";
    
    return 0;
}
