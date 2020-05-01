#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)

int main(){
  int A,B,C,D;
  cin >> A >> B >> C >> D;
  int t1 = A/D;
  int t2 = C/B;
  if(A%D){
    ++t1;
  }
  if(C%B){
    ++t2;
  }
  if(t1>=t2){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}
