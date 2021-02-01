// prepared by # Mahin

#include<iostream>
using namespace std;
int main()
{
    int n, first;
    cin>>n;
    first = n;
    while(first >= 10)
    {
        first = first / 10;
    }
    if(first%2==0){
       cout<<"EVEN";
    }
    else
    {
        cout<<"ODD";
    }

    return 0;
}
