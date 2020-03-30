#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
  ll K,A,B;
  cin >> K >> A >> B;
  if(B-A<=2||A>=K){
    cout << K+1 << endl;
  }else{
    ll m = (K-(A-1))/2;
    cout << B+(B-A)*(m-1)+(K-A-1)%2 << endl;
  }
}
