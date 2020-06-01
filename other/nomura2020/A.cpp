#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long int ll;
typedef pair<int,int> P;
const int INF = 1e9+7;

int main(){
    int a,b,c,d,k;
    cin >> a >> b >> c >> d >> k;
    int x = a*60+b;
    int y = c*60+d;
    cout << y - x - k;
}