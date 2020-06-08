#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long int ll;
typedef pair<int,int> P;
const int INF = 1e9+7;

int main(){
    int N;
    cin >> N;
    set<int> s = {1,2,3,5,6,9,10,13,17};
    if(s.count(N)){
        cout << "No";
    }else{
        cout << "Yes";
    }
}