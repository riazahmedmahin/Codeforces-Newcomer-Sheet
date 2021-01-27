// prepared by @ Mahin

#include<iostream>
using namespace std;

int main()
{
    int num1, num2;
    char ch;
    cin>>num1>>ch>>num2;

    if(ch == '<')
    {

        if(num1 < num2)
           cout<<"Right\n";
        else
            cout<<"Wrong\n";
    }
    else  if(ch == '>')//
    {

        if(num1 > num2)
            cout<<"Right\n";
        else
             cout<<"Wrong\n";
    }
    else
    {
        if (num1 == num2)
            cout<<"Right\n";
        else
            cout<<"Wrong\n";
    }
    return 0;
}

