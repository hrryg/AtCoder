#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,i,cnt=0;
  cin >> N;
  vector<int> v(N);
  vector<int> p(N);

  for(i=0;i<N;i++){
    cin >>v.at(i);
    p.at(i) = v.at(i);
  }
  sort(p.begin(),p.end());
  for(i=0;i<N;i++){
    if(!(v.at(i)==p.at(i)))
    cnt++;
  }
  if(cnt<=2)
  cout << "YES" << endl;
  else
  cout << "NO" << endl;
}
