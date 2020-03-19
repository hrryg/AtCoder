#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
int main(){
  string S;
  cin >> S;
  int maxn = 0;
  int cnt = 0;
  rep(i,S.size()){
    if(S.at(i)=='A'||S.at(i)=='C'||S.at(i)=='G'||S.at(i)=='T'){
      ++cnt;
      maxn = max(maxn,cnt);
    }else
      cnt = 0;
  }
  cout << maxn;
}
