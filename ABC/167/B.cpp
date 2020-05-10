#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long int ll;

int main(){
  int A,B,C,K,cnt=0;
  cin >> A >> B >> C >> K;
  if(K>=A){
    K -= A;
    cnt += A;
  }else if(K<A){
    cnt += K;
    K = 0;
  }
  if(K>=B){
    K -= B;
  }else if(K<B){
    K = 0;
  }
  if(K>=C){
    cnt -= C;
  }else if(K<C){
    cnt -= K;
    K = 0;
  }
  cout << cnt << endl;
}
