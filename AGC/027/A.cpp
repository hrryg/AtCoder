#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long int ll;

int main(){
  ll N,x,cnt=0;
  cin >> N >> x;
  vector<ll> a(N);
  rep(i,N){
    cin >> a.at(i);
  }
  sort(a.begin(),a.end());
  rep(i,N){
    if(i==N-1&&x-a.at(i)!=0){
      break;
    }else if(x-a.at(i)>=0){
      ++cnt;
      x -= a.at(i);
    }else{
      break;
    }
  }
  cout << cnt << endl;
}
