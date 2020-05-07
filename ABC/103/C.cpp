#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long int ll;

int main(){
  int N;
  cin >> N;
  ll ans=0;
  rep(i,N){
    ll a; cin >> a;
    ans += a;
  }
  cout << ans - N << endl;
}
