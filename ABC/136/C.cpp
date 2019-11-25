#include <bits/stdc++.h>
using namespace std;

int main(){
  int N,i,num=0;
  string s = "Yes";
  cin >> N;
  vector<int> H(N);

  for(i=0;i<N;i++)
  cin >> H.at(i);

  for(i=0;i<N;i++){
    if(N==1)
    break;
    else{
      if(i==0)
      continue;
      else{
        if(H.at(i)>=H.at(i-1)&&num<=H.at(i))
        continue;
        else if(H.at(i)<H.at(i-1)){
          if(H.at(i)>=H.at(i-1)-1&&num<=H.at(i)){
            H.at(i-1)--;
            num = H.at(i-1);
            continue;
          }
          else{
            s = "No";
            break;
          }
        }
      }
    }
  }
  cout << s << endl;
}
