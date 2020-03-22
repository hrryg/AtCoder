#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
#define rep(i,n) for(int i=0;i<n;++i)
#define Sort(a) sort(a.begin(),a.end())
const int INF = 1e9+7;

int main(){
  string A;
  ll B;
  cin >> A >> B;
  ll C = B%A.size();
  if(C)
    cout << A.at(C-1) <<endl;
  else
    cout << A.at(A.size()-1) << endl;
}
