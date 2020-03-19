#include <bits/stdc++.h>
using namespace std;

int main(){
  int H,W,h,w;
  cin >> H >> W >> h >> w;
  cout << H*W-W*h-(H*w-h*w) << endl;
}
