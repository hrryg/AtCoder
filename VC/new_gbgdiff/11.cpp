#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
#define rep(i,n) for(int i=0;i<n;++i)
#define Sort(a) sort(a.begin(),a.end())
const int INF = 1e9+7;

int main(){
  int W;
  cin >> W;
  string S = "DiscoPresentsDiscoveryChannelProgrammingContest2016";
  rep(i,S.size()){
    if((i+1)%W){
      cout << S.at(i);
    }else{
      cout << S.at(i) << endl;
    }
  }
  if(51%W)
    cout << endl;
}
