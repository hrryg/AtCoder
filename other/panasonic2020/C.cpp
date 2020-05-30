#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long int ll;
typedef pair<int,int> P;
const int INF = 1e9+7;

int main(){
    long double a,b,c;
    cin >> a >> b >> c;
    cout << ((a+b+2*sqrt(a*b)<c)?"Yes":"No") << endl;
}