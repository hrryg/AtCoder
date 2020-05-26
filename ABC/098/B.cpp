#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
typedef long long int ll;
typedef pair<int,int> P;
const int INF = 1e9+7;

int main(){
    int N;
    string S;
    cin >> N >> S;

    int ans=0;
    rep(i,N){
        int cnt=0;
        for(char c='a';c<='z';++c){
            bool l=0,r=0;
            for(int j=0;j<i;++j){
                if(S.at(j)==c){
                    l=1;
                }
            }
            for(int j=i;j<N;++j){
                if(S.at(j)==c){
                    r=1;
                }
            }
            if(l&&r){
                ++cnt;
            }
        }
        if(ans<cnt){
            ans = cnt;
        }
    }
    cout << ans << endl;
}