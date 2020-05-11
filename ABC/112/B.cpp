#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
const int INF = 1e9+7;

int main(){
  int N,T;
  cin >> N >> T;
  int num = INF;
  rep(i,N){
    int c,t;
    cin >> c >> t;
    if(T>=t){
      num = min(num,c);
    }
  }
  if(num==INF){
    cout << "TLE" << endl;
  }else{
    cout << num << endl;
  }
}
