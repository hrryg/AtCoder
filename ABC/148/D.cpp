#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,i,cnt=1,hakai=0;
  bool B = false;
  cin >> N;
  vector<int> a(N);

  for(i=0;i<N;i++)
  cin >> a.at(i);

  for(i=0;i<N;i++){
    if(a.at(i)!=cnt){
      hakai++;
    }else if(a.at(i)==cnt){
      cnt++;
      B = true;
    }
  }
  if(B==false){
    hakai = -1;
  }
  cout << hakai << endl;
}
