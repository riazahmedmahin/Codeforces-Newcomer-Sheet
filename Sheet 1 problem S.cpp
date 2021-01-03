//prepared by @Mahin
#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
    double n;
    cin>>n;
    if(n>=0 && n<= 25.0000)
    cout<<"Interval [0,25]\n";
    else if(n>=25.00001 && n<= 50.0000000)
    cout<<"Interval (25,50]\n";
    else if(n>=50.00000001 && n <=75.0000000)
    cout<<"Interval (50,75]\n";
    else if(n>=75.00000001 && n <=100.0000000)
    cout<<"Interval (75,100]";
    else
    {
        cout<<"Out of Intervals";
    }
    

    

}
