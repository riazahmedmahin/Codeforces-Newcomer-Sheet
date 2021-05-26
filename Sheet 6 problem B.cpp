// by @Mahin

///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>

using namespace std;
bool
prime (long long int n)
{
  if (n == 1)
    return false;
  else if (n == 2)
    return true;
  else if (n % 2 == 0)
    return false;
  else
    {
      int c = 0;
      for (int i = 3; i <= sqrt (n); i++)
	{
	  if (n % i == 0)
	    {
	      c++;
	      break;
	    }
	}
      if (c == 0)
	return true;
      else
	return false;
    }

}

int
main ()
{

  


  long long int n;
  cin >> n;
  (prime (n)) ? cout << "YES" : cout << "NO";
  cout << endl;

}
