#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long int ll;

int main(){
  ll N;
  map<ll,ll> A;
  cin >> N;
  rep(i,N){
    A[i+1] = 0;
  }
  rep(i,N-1){
    int t;
    cin >> t;
    ++A[t];
  }
  rep(i,N){
    cout << A[i+1] << endl;
  }
}
