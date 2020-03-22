#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
#define rep(i,n) for(int i=0;i<n;++i)
#define Sort(a) sort(a.begin(),a.end())
const int INF = 1e9+7;

int main(){
  string S;
  int k,cnt = 0;
  string C = "HAGIYA";
  cin >> S;
  rep(i,S.size()){
    if(S.at(i)==C.at(cnt)){
      ++cnt;
      if(C.size()==cnt){
        rep(j,i-1){
          cout << S.at(j);
        }
        k = i+1;
        break;
      }
    }else{
      cnt = 0;
    }
  }
  cout << "XILE";
  for(int i=k;i<S.size();++i)
    cout << S.at(i);
  cout << endl;
}
