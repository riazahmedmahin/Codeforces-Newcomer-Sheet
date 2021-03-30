// by @ Mahin


#include<bits/stdc++.h>
using namespace  std;
int main()
{
    char s[10010],b[7];char a[]="hello";
    int d=-1,h=0,i,j;
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
      if(s[i]==a[h])
      {
          b[h]=a[h];
          h++;
      }
    }
    int k=!strcmp(a,b);
    if(k==1)
    cout<<"YES";
    else
    cout<<"NO";
}
