// Prepared by @Mahin
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    long long int s=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s=s+a[i];
    }
    if(s<0){
        s=(-s);
    }
    cout<<s;
    return 0;
}
