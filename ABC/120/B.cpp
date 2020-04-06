#include <bits/stdc++.h>
using namespace std;


int main(){
  int A,B,K,cnt=0;
  vector<int> v;
  cin >> A >> B >> K;
  for(int i=1;i<=100;++i){
    if(!(A%i)&&!(B%i)){
      v.push_back(i);
    }
  }
  reverse(v.begin(),v.end());
  cout << v.at(K-1) << endl;
}
