#include <bits/stdc++.h>
using namespace std;

int main(){
  long H,atk=1,cnt=1,i,p;
  cin >> H;
  while(H!=1){
    H = H/2;
    cnt++;
  }
  for(i=1;i<cnt;i++){
      p = pow(2,i);
      atk += p;
    }
  cout << atk;
}
