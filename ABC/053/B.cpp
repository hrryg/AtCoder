#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
#define rep(i,n) for(int i=0;i<n;++i)
#define Sort(a) sort(a.begin(),a.end())
const int INF = 1e9+7;

int main(){
  string s;
  int cnt = 0;
  cin >> s;
  rep(i,s.size()){
    if(s.at(i)=='A'){
      int t = 0;
      for(int j=i;j<s.size();++j){
        if(s.at(j)=='Z'){
          ++t;
          cnt = max(cnt,t);
        }else{
          ++t;
        }
      }
      if(cnt){
        break;
      }
    }
  }
  cout << cnt << endl;
}
