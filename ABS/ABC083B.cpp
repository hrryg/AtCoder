#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,A,B,i,sum=0;
  cin >> N >> A >> B;

  for(i=1;i<=N;i++){
    int a = i;
    int b = 0;
    do{
      b += a%10;
      a = a/10;
    }while(a>0);
    if(A <= b && b <= B)
    sum += i;
  }
  cout << sum << endl;
}
