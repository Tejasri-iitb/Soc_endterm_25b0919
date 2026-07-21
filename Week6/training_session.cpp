#include <iostream>
#include <vector>
using namespace std;

void solve(){
    int n;
    cin>>n;
    //problem (topic, difficulty)
    vector<pair<int,int>> p(n); 
    //tc: topic counts, dc: diff counts
    vector<long long> tc(n+1,0), dc(n+1,0); 

    for(int i=0;i<n;++i){
        cin>>p[i].first>>p[i].second;
        tc[p[i].first]++;
        dc[p[i].second]++;
    }

    long long tot=(1LL*n*(n-1)*(n-2))/6;
    long long inv=0;

    for(int i=0;i<n;++i){
        inv += (tc[p[i].first]-1) * (dc[p[i].second]-1);
    }
    cout<<tot-inv<<"\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
