
// by @ Mahin 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    
    int l=s.size(),sum=0;
    
    for(int i=0;i<l;i++){
        sum=sum+(s[i]-'0');
    }
    cout << sum;
    return 0;
}
