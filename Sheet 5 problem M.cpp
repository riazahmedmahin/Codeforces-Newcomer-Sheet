// by @ Mahin

#include<bits/stdc++.h>
using namespace std;
int main ()
{

  vector < int >v;
  int n;
  cin >> n;
  int in;
  int k = n;
  while (n--)
    {
      cin >> in;
      v.push_back (in);
    }
  vector < int >::iterator ip;
  sort (v.begin (), v.end ());
  ip = unique (v.begin (), v.begin () + k);
  v.resize (distance (v.begin (), ip));
  cout << v.size ();
  return 0;
}
