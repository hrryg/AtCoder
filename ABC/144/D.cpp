#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
#define rep(i,n) for(int i=0;i<n;++i)
#define Sort(a) sort(a.begin(),a.end())
const int INF = 1e9+7;

int main(){
  double a,b,x;
  cin >> a >> b >> x;
  double y = (a*a*b)/x;
  cout << setprecision(10) << 90/y;
}
