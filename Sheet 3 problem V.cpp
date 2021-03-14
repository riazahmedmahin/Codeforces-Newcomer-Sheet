// create by @ Mahin 


 #include<bits/stdc++.h>

using namespace  std;
int main()
{
    int N,M;
    cin>>N>>M;
    int a[N+10],b[M+10],i,j;
    for(i=0; i<N; i++)
    {
        cin>>a[i];
        if(i<=M)b[i]=0;
    }
    for(i=0; i<N; i++)
    {
        b[a[i]]++;
    }
    for(i=1; i<=M; i++)
    {
        cout<<b[i]<<endl;
    }
    return 0;
}
