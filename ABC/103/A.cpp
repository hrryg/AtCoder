#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long int ll;
typedef pair<int,int> P;
const int INF = 1e9+7;

int main(){
    vector<int> a(3);
    rep(i,3){
        cin >> a.at(i);
    }
    sort(a.begin(),a.end());
    cout << abs(a.at(0)-a.at(1))+abs(a.at(1)-a.at(2));
}