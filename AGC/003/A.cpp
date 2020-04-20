#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
#define rep(i,n) for(int i=0;i<n;++i)
#define Sort(a) sort(a.begin(),a.end())
const int INF = 1e9+7;

int main(){
  string S;
  bool n=0,e=0,w=0,s=0;
  cin >> S;
  rep(i,S.size()){
    if(S.at(i)=='N'){
      n = 1;
    }else if(S.at(i)=='E'){
      e = 1;
    }else if(S.at(i)=='W'){
      w = 1;
    }else if(S.at(i)=='S'){
      s = 1;
    }
  }
  if(n&&e&&w&&s||n&&s&&!e&&!w||e&&w&&!n&&!s){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}
