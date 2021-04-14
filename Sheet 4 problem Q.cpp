// by @ Mahin
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin,str);
    int len=str.size();
    int j=0;
    for(int i=0;i<=len;i++)
    {
        if(str[i]==' ' || str[i]=='\0')
        {
            reverse(str.begin()+j, str.begin()+i);
            j=i+1;
        }
    }
    cout<<str<<endl;
    return 0;
}
