#include <bits/stdc++.h>
using namespace std;
#define loop(i,n) for(int i=0;i<n;++i)

int main(){
  int N,D;
  cin >> N >> D;
  vector<vector<int>> v(N,vector<int>(D));
  loop(i,N){
    loop(j,D){
      cin >> v.at(i).at(j);
    }
  }
  int ans = 0;
  loop(i,N){
    for(int j=i+1;j<N;++j){
      double dis = 0;
      loop(k,D){
        int l = pow(v.at(i).at(k)-v.at(j).at(k),2);
        dis += l;
      }
      dis = sqrt(dis);
      if(floor(dis)==dis){
        ++ans;
      }
    }
  }
  cout << ans;
}
