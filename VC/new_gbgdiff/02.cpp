#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
#define rep(i,n) for(int i=0;i<n;++i)
#define Sort(a) sort(a.begin(),a.end())
const int INF = 1e9+7;

int main(){
  int x1,x2,y1,y2;
  cin >> x1 >> y1 >> x2 >> y2;
  int z = abs(x1-x2)+abs(y1-y2)+1;
  cout << z << endl;
}
