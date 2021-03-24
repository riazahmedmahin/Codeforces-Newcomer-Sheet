// by @ Mahin 
 #include<bits/stdc++.h>
using namespace std;
int main(){
    char s[1000000];
    gets(s);

    for(long long int i=0;i<1000000;i++){
        if(s[i]==92)
        break;
        cout<<s[i];
    }

    return 0;
}
