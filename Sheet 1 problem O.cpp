// prepared by @ Mahin

#include<iostream>
using namespace std;
#include<math.h>
int main()
{
    int a, b, sum;
    char ch = 's';

    cin>>a>>ch>>b;
    if((a>=1 && a<=pow(10,4)) && (b>=1 && b<= pow(10,4)))
    {
        if(ch == '+')
        {
            sum = a + b;
            cout<<sum<<endl;
        }
        else if(ch == '-')
        {
            sum = a - b;
            cout<<sum<<endl;
        }
        else if(ch == '*')
        {
            sum = a * b;
            cout<<sum<<endl;
        }
        else if(ch == '/')
        {
            sum = a / b;
            cout<<sum<<endl;
        }
    }
    return 0;
}
