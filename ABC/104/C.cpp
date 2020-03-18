#include <bits/stdc++.h>
using namespace std;

int main(){
  int D,G;
  cin >> D >> G;
  vector<pair<int,int>> p(D);
  for(int i=0;i<D;++i){
    cin >> p.at(i).first >> p.at(i).second;
  }

  int ans = 1e9;
  for(int mask=0;mask<(1 << D);++mask){
    int s = 0, num = 0, rest_max = -1;
    for(int i=0;i<D;++i){
      if(mask >> i & 1){
        //マスクで"1"だった問題をすべて解いた時の基本点と、ボーナス点を"s"に追加
        //"numには解いた問題数を追加"
        s += 100*(i+1)*p.at(i).first+p.at(i).second;
        num += p.at(i).first;
      }else{
        rest_max = i;
      }
    }
    if(s<G){
      int s1 = 100*(rest_max+1);
      int need = (G-s+s1-1)/s1;
      //解く必要のある問題数を求める
      if(need>=p.at(rest_max).first){
        //解く必要のある問題数より実際の問題数が少なかった場合"continue"する
        continue;
      }
      num += need;
    }
    ans = min(ans,num);
  }
  cout << ans << endl;
}
