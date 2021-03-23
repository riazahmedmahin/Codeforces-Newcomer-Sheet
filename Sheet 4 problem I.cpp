// by @ Mahin 

 #include<bits/stdc++.h>
using namespace std;


int main(){
    char s[1000];
    int l,left,right,check=0;

    cin>>s;

    l=strlen(s);

    left=0;
    right=l-1;

    while(left<right && check==0){
        if(s[left]==s[right])
        ;
        else
            check='f';
        left++;
        right--;
    }
    if(check==0)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
