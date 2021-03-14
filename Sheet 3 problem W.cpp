// create by @ Mahin

 #include<bits/stdc++.h>
using namespace std;
#define SIZE 100001
int main()
{

    int r, c, ara[101][101], ara2[101][101], c1, c2;
    cin>>r>>c;
    for(c1 = 0; c1 < r; c1++)
    {
        for(c2 = 0; c2 < c; c2++)
        {
            cin>>ara[c1][c2];
            ara2[c1][c-1-c2]=ara[c1][c2];
        }
    }
    for(c1=0; c1<r; c1++)
    {
        for(c2=0; c2<c; c2++)
        {
            cout<<ara2[c1][c2]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}




