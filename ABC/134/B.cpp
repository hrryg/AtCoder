#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,D,cnt=0;
  cin >> N >> D;

  do{
    N = N - D*2 - 1;
    cnt++;
  }while(N>0);
  cout << cnt << endl;
}
