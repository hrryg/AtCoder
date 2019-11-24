#include <bits/stdc++.h>
using namespace std;
 int main(){
   int X,Y,sum=0;
   cin >> X >> Y;
   if(X == 1)
   sum += 300000;
   if(X == 2)
   sum += 200000;
   if(X == 3)
   sum += 100000;
   if(Y == 1)
   sum += 300000;
   if(Y == 2)
   sum += 200000;
   if(Y == 3)
   sum += 100000;
   if(X == 1 && Y == 1)
   sum += 400000;
   cout << sum << endl;
}
