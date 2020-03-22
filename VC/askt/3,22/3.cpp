#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
#define rep(i,n) for(int i=0;i<n;++i)
#define Sort(a) sort(a.begin(),a.end())
const ll INF = 1e15+7;

int main(){
  ll N,sum=0;
  cin >> N;
  vi a(N);
  rep(i,N){
    cin >> a.at(i);
    sum += a.at(i);
  }
  ll dif = INF;
  ll num = 0,num2 = 0;
  rep(i,N-1){
    num += a.at(i);
    num2 = sum - num;
    dif = min(abs(num-num2),dif);
  }
  cout << dif << endl;
}
