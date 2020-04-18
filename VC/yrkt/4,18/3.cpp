#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long int ll;

int main(){
  int N;
  ll cnt=0;
  cin >> N;
  vector<string> S(N);
  map<string,int> m;
  rep(i,N){
    cin >> S.at(i);
    sort(S.at(i).begin(),S.at(i).end());
  }
  rep(i,N){
    if(m.count(S.at(i))){
      cnt += m.at(S.at(i));
      ++m.at(S.at(i));
    }else{
      m[S.at(i)] = 1;
    }
  }
  cout << cnt << endl;
}
