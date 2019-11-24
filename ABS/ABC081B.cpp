#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,i,sum=0;
  bool a = true;
  cin >> N;
  vector<int> v(N);

  for(i=0;i<N;i++)
  cin >> v.at(i);

  do{
    for(i=0;i<N;i++){
      if(v.at(i)%2){
        a = false;
        break;
      }
      else{
        v.at(i) = v.at(i)/2;
      }
    }
    if(a==true)
    sum++;
  }while(a==true);
  cout << sum << endl;
}
