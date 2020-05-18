#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;++i)
vector<vector<int>> C(50,vector<int>(50));
int cnt=0,w,h;

void dfs(int x,int y){
    C.at(x).at(y) = 0;
    for(int i=-1;i<2;++i){
        for(int j=-1;j<2;++j){
            int nh = x + i;
            int nw = y + j;
            if(0<=nw&&nw<w&&0<=nh&&nh<h&&C.at(nh).at(nw)==1){
            dfs(nh,nw);
            }
        }
        
    }
}

int main(){
    while(true){
        cin >> w >> h;
        if(w==0&&h==0){
            return 0;
        }
        rep(i,50){
            rep(j,50){
                C.at(i).at(j) = 0;
            }
        }
        cnt = 0;
        rep(i,h){
            rep(j,w){
                cin >> C.at(i).at(j);
            }
        }
       rep(i,h){
            rep(j,w){
                if(C.at(i).at(j)==1){
                    dfs(i,j);
                    ++cnt;
                }   
            }
        }
        cout << cnt << endl;    
    }
}
