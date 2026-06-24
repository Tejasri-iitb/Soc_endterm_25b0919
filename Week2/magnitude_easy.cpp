#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void solve(){
    int n;cin>>n;
    long long tot_sum=0;

    vector<long long> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        tot_sum+=a[i];
    }
        
    vector<long long> pref(n, 0);
    pref[0] = a[0];
    long long min_pref_sum = min(0LL, pref[0]);
    for(int i = 1; i < n; i++) {
        pref[i] = pref[i - 1] + a[i];
        min_pref_sum = min(min_pref_sum, pref[i]);
    }
    long long ans =tot_sum-2*min_pref_sum;
    cout<<ans<<"\n";
}
int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}
