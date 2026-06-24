#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    long long l, r;
    cin >> n >> l >> r;
    vector<long long> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    int ans= 0;
    long long sum = 0;
    int L= 0;

    for(int R = 0; R < n; R++) {
        sum += a[R];
        while (sum > r && L <= R) {
            sum -= a[L];
            L++;
        }
        if (sum >= l && sum <= r) {
            ans++;
            sum = 0;
            L = R + 1;
        }
    }
    cout<<ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
