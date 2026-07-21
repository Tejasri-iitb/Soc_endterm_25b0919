#include <bits/stdc++.h>
using namespace std;

const int N=200005;
int p[N],c[N];

vector<int> nodes[N];
map<int,int> cnt[N];

int find(int i){
    if(p[i]==i)return i;
    return p[i]=find(p[i]);
}

void uni(int i,int j){
    int root_i=find(i),root_j=find(j);
    if(root_i!=root_j)p[root_i]=root_j;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m,k;
    if(!(cin>>n>>m>>k))return 0;

    for(int i=1;i<=n;++i){
        cin>>c[i];
        p[i]=i;
    }

    for(int i=0;i<m;++i){
        int l,r;
        cin>>l>>r;
        uni(l,r);
    }

    for(int i=1;i<=n;++i){
        int root=find(i);
        nodes[root].push_back(i);
    }

    int ans=0;
    for(int i=1;i<=n;++i){
        if(nodes[i].empty())continue;
        int mx=0;
        for(int u:nodes[i]){
            cnt[i][c[u]]++;
            mx=max(mx,cnt[i][c[u]]);
        }
        ans+=((int)nodes[i].size()-mx);
    }

    cout<<ans<<"\n";
    
}
