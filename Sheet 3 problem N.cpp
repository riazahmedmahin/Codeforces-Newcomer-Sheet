// prepared  by @mahin 

#include<bits/stdc++.h>
using namespace std;


int main(){
    int a,b,d=0,i;
    //taking input of a,b
    cin>>a>>b;

    //taking input the code
    int s=a+b+1;
    char code[s];
    cin>>code;

    //checking all code digit is valid or not
    for(i=0;i<s;i++){
        if(i==a)
            continue;
        if(code[i]>=48 && code[i]<=75)
            d++;
    }

    //checking the code is valid or not according to the rules
    if(code[a]==45 && d==(s-1)){
        cout<<"Yes";
    }else{
        cout<<"No";
    }

return 0;
}

