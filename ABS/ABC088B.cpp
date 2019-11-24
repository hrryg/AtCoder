#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,i,a=0,b=0;
  cin >> N;
  vector<int> v(N);

  for(i=0;i<N;i++)
  cin >> v.at(i);
  sort(v.begin(),v.end());
  reverse(v.begin(),v.end());

  for(i=0;i<N;i++){
    if(i%2)
    b += v.at(i);
    else
    a += v.at(i);
  }
  cout << a - b << endl;
}
