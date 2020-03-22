#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
#define rep(i,n) for(int i=0;i<n;++i)
#define Sort(a) sort(a.begin(),a.end())
const int INF = 1e9+7;

int main(){
  int N,n1,n2,n3,n4,n5,cnt=0;
  cin >> N;
  rep(i,N){
    cin >> n1 >> n2 >> n3 >> n4 >> n5;
    int x = n1+n2+n3+n4+n5;
    if(0<=x&&x<20)
      ++cnt;
  }
  cout << cnt << endl;
}
