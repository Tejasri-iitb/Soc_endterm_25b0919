#include<iostream>
#include<string>
#include<vector>
#include<queue>
//bfs traversal
using namespace std ;

int dr[]={-1,1,0,0};
int dc[]={0,0,-1,1};

void solve(){
    int n;
    cin>>n;
    vector<string> grid(2);
    cin>>grid[0];
    cin>>grid[1];
    vector<vector<bool>> visited(2,vector<bool>(n,false));
    queue<pair<int,int>> q;

    q.push({0,0});
    visited[0][0] = true;

    bool possible = false;
    
    while(!q.empty()){
        auto [r,c] =q.front();
        q.pop();

        if(r==1 && c==n-1){
            possible=true;
            break;
        }

        for(int i=0;i<4;i++){
            int next_r = r+dr[i];
            int next_c = c+dc[i];

            if(next_r >=0 && next_r<2 && next_c>=0 && next_c <n){
                if(grid[next_r][next_c]=='>'){
                    next_c++;
                }
                else{
                    next_c--;
                }

                if(!visited[next_r][next_c]){
                    visited[next_r][next_c]=true;
                    q.push({next_r,next_c});
                }
            }
        }
    }
    if(possible) {
        cout << "YES\n";
    }else{
        cout<<"NO\n";
    }
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t ;
    cin >> t ;
    while (t--){
        solve();
    }
    
}
