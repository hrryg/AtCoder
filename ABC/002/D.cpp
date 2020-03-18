#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,M,x,y,ans=0;
  cin >> N >> M;
  vector<set<int>> p(N);

  for(int i=0;i<M;++i){
    cin >> x >> y;
    --x; --y;
    p.at(x).insert(y);
    p.at(y).insert(x);
  }
  for(int i=1;i<(1<<N);++i){
    vector<int> t;
    bool ok = true;
    for(int j=0;j<N;++j){
      if(i & 1<<j)
        t.push_back(j);
    }
    for(int j=0;j<t.size();++j){
      for(int k=j+1;k<t.size();++k){
        if(!p.at(t.at(j)).count(t.at(k)))
          ok = false;
      }
    }
    if(ok)
      ans = max(ans,(int)t.size());
  }
  cout << ans;
}
