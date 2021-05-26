// by @ Mahin

#include<bits/stdc++.h>  
using namespace std; 

void disti(vector <int> num){
	int count = 1;
	for(int i = 0; i < num.size() - 1; i++){
		if(num[i] != num[i + 1]) count++;
	}
	cout << count;
}

int main ()
{


  int n;
  cin >> n;

  if(n == 0){
  	cout << 0;
  	 return 0;
  }

  vector <int> v(n);

  for(auto &x : v){
  	cin >> x;
  }

  sort(v.begin(),v.end());

  disti(v);

  time;
  return 0;
}
