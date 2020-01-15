#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,K,M,i,test=-1,A,sum=0;
  cin >> N >> K >> M;


  for(i=0;i<N-1;i++){
    cin >> A;
    sum += A;
  }

  for(i=0;i<K;i++){
    if((sum+i)/N>=M){
      test = i;
      break;
    }
  }
  cout << test << endl;
}
