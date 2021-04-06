#include<iostream>
using namespace std;
void sum( int a, int b )
{
   int temp=a;
    a=b;
    b=temp;
   cout<<a<<" "<<temp;
}

int main()
{
    int a,b;
    cin>>a>>b;
    sum(a,b);
}
