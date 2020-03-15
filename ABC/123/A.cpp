#include <bits/stdc++.h>
using namespace std;


int main(){
  vector<int> a(5);
  int k;
  for(int i=0;i<5;++i)
    cin >> a.at(i);
  cin >> k;
  if(abs(a.at(0)-a.at(4))>k)
    cout << ":(";
  else
    cout << "Yay!";
}
