#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,Y;
  int yen10000 = -1;
  int yen5000 = -1;
  int yen1000 = -1;
  cin >> N >> Y;

  for(int i=0;i<=N;i++){
    for(int j=0;j + i<=N;j++){
      int k = N - i - j;
      int sum = 10000*i + 5000*j + 1000*k;
      if(sum==Y){
        yen10000 = i;
        yen5000 = j;
        yen1000 = k;
      }
    }
  }
  cout << yen10000 << " " << yen5000 << " " << yen1000 << endl;
}
