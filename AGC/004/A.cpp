#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
  ll A,B,C;
  cin >> A >> B >> C;
  ll all = A*B*C;
  if(!(A%2)||!(B%2)||!(C%2)){
    cout << "0" << endl;
  }else{
    cout << min(A*B,min(B*C,C*A)) << endl;
  }
}
