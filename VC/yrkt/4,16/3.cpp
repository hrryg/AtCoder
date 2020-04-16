#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)

int main(){
  int N;
  cin >> N;
  vector<int> a(N);
  int sum = 0;
  rep(i,N){
    cin >> a.at(i);
    sum += a.at(i);
  }
  int cost = 1e9+7;
  for(int j=-100;j<=100;++j){
    int t = 0;
    rep(i,N){
      if(a.at(i)==j){
        continue;
      }else{
        t += pow((a.at(i)-j),2);
      }
    }
    cost = min(cost,t);
  }

  cout << cost << endl;
}
