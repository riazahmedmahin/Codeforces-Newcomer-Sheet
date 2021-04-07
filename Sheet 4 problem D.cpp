// by @ mahin

#include<bits/stdc++.h>
using namespace std;

int main(){
    char s[1000],t[1000];
    cin>>s>>t;
    char x=s[0],y=t[0];
    int i,sl,tl;

    sl=strlen(s);
    tl=strlen(t);

    strcat(s,t);
    cout<<sl<<" "<<tl<<endl;
    cout<<s<<endl;
    for(i=0;i<sl;i++){
        s[0]=y;
        cout<<s[i];
    }
    cout<<" ";
    for(i=0;i<tl;i++){
        t[0]=x;
        cout<<t[i];
    }

    return 0;
}
