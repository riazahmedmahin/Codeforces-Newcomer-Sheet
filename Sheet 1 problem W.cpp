// prepared by @ Mahin

#include<iostream>
using namespace std;
int main()
{
    int A,B,C;
    char S, Q;
    cin>>A>>S>>B>>Q>>C;
    switch(S)
    {
    case '+' :
        if(C == A + B )
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<A + B<<endl;
        }
        break;

    case '-' :
        if(C == A - B )
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<A - B<<endl;
        }
        break;

    case '*' :
        if(C == A * B )
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<A * B<<endl;
        }
        break;
    }
    return 0;
}
