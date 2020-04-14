#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long int ll;

int main(){
  ll A,B,C,cnt=0;
  cin >> A >> B >> C;
  if(A==1&&B==1&&C==1){
    cout << "0" << endl;
  }else if(A==B&&B==C&&C==A){
    cout << "-1" << endl;
  }else{
    while(!(A%2)&&!(B%2)&&!(C%2)){
      ll a=0,b=0,c=0;
      a += B/2 + C/2;
      b += A/2 + C/2;
      c += B/2 + A/2;
      A = a;
      B = b;
      C = c;
      ++cnt;
    }
    cout << cnt << endl;
  }

}
