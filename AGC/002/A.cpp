#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
  ll a,b;
  cin >> a >> b;
  if(a<=0&&0<=b){
    cout << "Zero" << endl;
  }else if(0<a&&0<b){
    cout << "Positive" << endl;
  }else{
    ll t = abs(a-b);
    if(t%2){
      cout << "Positive" << endl;
    }else{
      cout << "Negative" << endl;
    }
  }
}
