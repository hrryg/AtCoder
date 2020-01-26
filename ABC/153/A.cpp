#include <bits/stdc++.h>
using namespace std;

int main(){
  int H,A,cnt;
  cin >> H >> A;
  while(H>0){
    H-=A;
    cnt++;
  }
  cout << cnt;
}
