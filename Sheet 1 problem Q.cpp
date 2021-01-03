//prepared by @Mahin

#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
    double x,y;
    cin>>x>>y;
    if(x==0.0){
        if(y==0.0)cout<<"Origem\n";
        else cout<<"Eixo Y\n";
    }
    else if (y==0.0){
        if(x==0.0)cout<<"Origem";
        else cout<<"Eixo X";
    }
    else if( x > 0.0 && y > 0.0) cout<<"Q1\n";
    else if( x < 0.0 && y > 0.0) cout<<"Q2\n";
    else if( x < 0.0 && y < 0.0) cout<<"Q3\n";
    else if( x > 0.0 && y < 0.0) cout<<"Q4\n";
    
}
