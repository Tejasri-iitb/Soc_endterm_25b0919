#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MOD = 1e9 + 7;

long long power(long long base, long long exp) {
    long long res = 1;
    base %= MOD;
    while (exp > 0) {
        if (exp % 2 == 1) res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp /= 2;
    }
    return res;
}

void solve() {
    int n, k;
    cin >> n >> k;
    
    vector<long long> a(n);
    long long total_sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total_sum += a[i];
    }
    
    long long current_max = 0;
    long long global_max = 0;
    for (int i = 0; i < n; i++) {
        current_max += a[i];
        if (current_max < 0) {
            current_max = 0;
        }
        global_max = max(global_max, current_max);
    }

    long long p = power(2, k);
    long long multiplier = (p - 1 + MOD) % MOD;   
    long long max_sub_mod = global_max % MOD;
    long long added_value = (max_sub_mod * multiplier) % MOD;
    
    long long ans = (total_sum % MOD + added_value) % MOD;
    ans = (ans + MOD) % MOD;
    
    cout << ans << "\n";
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
