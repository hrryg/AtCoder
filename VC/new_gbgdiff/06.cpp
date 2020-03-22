#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
#define rep(i,n) for(int i=0;i<n;++i)
#define Sort(a) sort(a.begin(),a.end())
const int INF = 1e9+7;

int main(){
  int N,K;
  cin >> N >> K;
  vi a(N);
  rep(i,N)
    cin >> a.at(i);
  int cnt = 0;
  int day;
  rep(i,N){
    cnt += a.at(i);
    if(K<=cnt){
      day = i+1;
      break;
    }
  }
  cout << day << endl;
}
