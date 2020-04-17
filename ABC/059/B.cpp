#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define rep(i,n) for(int i=0;i<n;++i)

int main(){
  string A,B;
  cin >> A >> B;
  if(A.size()>B.size()){
    cout << "GREATER" << endl;
  }else if(A.size()<B.size()){
    cout << "LESS" << endl;
  }else{
    bool b = 1;
    rep(i,A.size()){
      if(A.at(i)>B.at(i)){
        cout << "GREATER" << endl;
        b = 0; break;
      }else if(A.at(i)<B.at(i)){
        cout << "LESS" << endl;
        b = 0; break;
      }
    }
    if(b){
      cout << "EQUAL" << endl;
    }
  }
}
