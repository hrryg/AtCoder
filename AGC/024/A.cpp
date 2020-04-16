#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
  ll A,B,C,K;
  cin >> A >> B >> C >> K;
  if(K%2){
    cout << B-A << endl;
  }else{
    cout << A-B << endl;
  }
}
