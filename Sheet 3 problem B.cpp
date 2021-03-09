// Prepard by @mahin

#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n,i,s,f=0;
    cin>>n;
    int A[n];
    for(i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cin>>s;
    for(i=0;i<n;i++)
    {
        if(A[i]==s)
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
     cout<<i;   
    }
    else 
    cout<<"-1";
    
    return 0;
}
