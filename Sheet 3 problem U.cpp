//  by @ Mahin

 #include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c1, c2, i=0, cp=0, N;
    cin>>a>>b;
    int ara1[a], ara2[b];
    for(c1=0; c1<a; c1++)
    {
        cin>>ara1[c1];
    }
    for(c2=0; c2<b; c2++)
    {
        cin>>ara2[c2];
    }
    for(c1=0; c1<a; c1++)
    {
        if(ara1[c1]==ara2[i])
        {
            cp++;
            i++;
        }
    }
    if(cp==b)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
