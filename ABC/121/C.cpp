#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
#define rep(i,n) for(int i=0;i<n;++i)
#define Sort(a) sort(a.begin(),a.end())
const int INF = 1e9+7;

int main(){
  ll N,M,m=0;
  cin >> N >> M;
  vector<pair<ll,ll>> v(N);
  rep(i,N)
    cin >> v.at(i).first >> v.at(i).second;
  Sort(v);
  rep(i,N){
    if(M<=v.at(i).second){
      m += v.at(i).first * M;
      break;
    }
    else{
      M -= v.at(i).second;
      m += v.at(i).first*v.at(i).second;
    }
  }
  cout << m;
}
