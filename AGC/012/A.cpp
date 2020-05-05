#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
  ll N;
  cin >> N;
  vector<ll> a(N*3);
  for(int i=0;i<N*3;++i){
    cin >> a.at(i);
  }
  sort(a.begin(),a.end());
  reverse(a.begin(),a.end());
  ll p=0;
  for(int i=1;i<N*2;i+=2){
    p += a.at(i);
  }
  cout << p << endl;
}
