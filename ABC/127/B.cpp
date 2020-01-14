#include <bits/stdc++.h>
using namespace std;

int main(){
  int i;
  long r,D,x;
  cin >> r >> D >> x;

  for(i=0;i<10;i++){
    cout << r*x-D << endl;
    x = r*x-D;
  }
}
