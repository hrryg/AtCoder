#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
#define rep(i,n) for(int i=0;i<n;++i)
#define Sort(a) sort(a.begin(),a.end())
const int INF = 1e9+7;

int main(){
  char C;
  cin >> C;
  if(C=='O'||C=='P'||C=='K'||C=='L')
    cout << "Right" << endl;
  else
    cout << "Left" << endl;
}
