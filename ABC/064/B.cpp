#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
#define rep(i,n) for(int i=0;i<n;++i)
#define Sort(a) sort(a.begin(),a.end())
const int INF = 1e9+7;

int main(){
  string o,e;
  cin >> o >> e;
  if(o.size()-e.size()==0){
    rep(i,o.size()){
      cout << o.at(i) << e.at(i);
    }
    cout << endl;
  }else{
    rep(i,e.size()){
      cout << o.at(i) << e.at(i);
    }
    cout << o.at(o.size()-1) << endl;
  }
}
