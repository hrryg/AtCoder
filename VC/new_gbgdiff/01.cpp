#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
#define rep(i,n) for(int i=0;i<n;++i)
#define Sort(a) sort(a.begin(),a.end())
const int INF = 1e9+7;

int main(){
  int a,b,c;
  vi v;
  cin >> a >> b >> c;
  for(int i=1;i<128;++i){
    if(i%3==a&&i%5==b&&i%7==c)
      v.push_back(i);
  }
  for(int i=0;i<v.size();++i)
    cout << v.at(i) << endl;
}
