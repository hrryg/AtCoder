#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
typedef vector<int> vi;
typedef long long int ll;

int main(){
  ll N,sum=0;
  cin >> N;
  vector<ll> A(N);
  rep(i,N)
    cin >> A.at(i);
  map<ll,ll> ball;
  map<ll,ll> cb;
  rep(i,N){
    if(ball.count(A.at(i))){
      ++ball.at(A.at(i));
    }else{
      ball[A.at(i)] = 1;
    }
  }
  for(auto p : ball){
    auto v = p.second;
    if(v<=1){
      continue;
    }else{
      sum += (v*(v-1)/2);
    }
  }
  rep(i,N){
    ll n = (ball.at(A.at(i)));
    ll cnt = (n*(n-1)/2);
    --n;
    cnt -= (n*(n-1)/2);
    cout << sum - cnt << endl;
  }
}
