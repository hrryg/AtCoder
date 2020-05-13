#include <bits/stdc++.h>
using namespace std;

int main(){
  int a,b,c;
  cin >> a >> b >> c;
  int ans = max<int>({
    10*a+b+c,
    a+10*b+c,
    a+b+10*c,
  });
  cout << ans << endl;
}
