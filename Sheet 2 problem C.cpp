// prepared by @ Mahin

#include<iostream>
using namespace std;
int main()
{
    int n,i,E,O,P,N,x;
    E=O=P=N=0;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>x;
        if(x%2==0)
            E++;
        if(x%2!=0)
            O++;
        if(x>0)
            P++;
        if(x<0)
            N++;
    }
    cout<<"Even: "<<E<<endl;
    cout<<"Odd: "<<O<<endl;
    cout<<"Positive: "<<P<<endl;
    cout<<"Negative: "<<N<<endl;
    return 0;
}
