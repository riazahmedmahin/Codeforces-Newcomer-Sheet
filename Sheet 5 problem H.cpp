// by @ Mahin

#include <bits/stdc++.h>
using namespace std;
char
Loop (char c)
{
  return c;
}

int main ()
{

  int t;
  cin >> t;
  while (t--)
    {
      int n, i;
      char c;
      cin >> n >> c;
      for (i = 0; i < n; i++)
	cout << Loop (c) << " ";
      cout << endl;
    }
}
