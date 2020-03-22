#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
#define rep(i,n) for(int i=0;i<n;++i)
#define Sort(a) sort(a.begin(),a.end())
const int INF = 1e9+7;
const double pie = 3.14159265358979;

int main(){
  double R,D;
  cin >> R >> D;
  cout << setprecision(15) << (R*R*pie)*(D*2*pie) << endl;
}
