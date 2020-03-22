#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
#define rep(i,n) for(int i=0;i<n;++i)
#define Sort(a) sort(a.begin(),a.end())
const int INF = 1e9+7;

int main(){
  string S;
  cin >> S;
  int cnt0=0,cnt1=0;
  rep(i,S.size()){
    if(S.at(i)=='0')
      ++cnt0;
    else
      ++cnt1;
  }
  if(cnt0<cnt1)
    cout << cnt0*2 << endl;
  else
    cout << cnt1*2 << endl;
}
