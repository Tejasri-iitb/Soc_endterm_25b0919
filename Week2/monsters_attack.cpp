#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

void solve(){
    int n;
    long long k;
    cin>>n>>k;
    vector<long long> a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    vector<long long> health(n + 1, 0);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        health[abs(x)] += a[i];
    }
    long long bullets = 0;
    for (int d = 1; d <= n; d++) {
        bullets += k;
        bullets -= health[d];
        if (bullets < 0) {
            cout <<"NO\n";
            return;
        }
    }
    cout <<"YES\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while (t--){
        solve();
    }
}
