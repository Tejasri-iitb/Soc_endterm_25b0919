#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,h,l,r;
    if(!(cin>> n >> h >> l >> r)) return 0;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> dp(h, -1);
    dp[0] = 0;

    auto is_good = [&](int hour) {
        return (hour >= l && hour <= r) ? 1 : 0;
    };

    for (int i = 0; i < n; i++) {
        vector<int> next_dp(h, -1);

        for (int j = 0; j < h; j++) {
            if (dp[j] == -1) continue;

            int h1 = (j + a[i]) % h;
            next_dp[h1] = max(next_dp[h1], dp[j] + is_good(h1));

            int h2 = (j + a[i] - 1) % h;
            next_dp[h2] = max(next_dp[h2], dp[j] + is_good(h2));
        }
        dp = move(next_dp);
    }

    int ans = 0;
    for (int j = 0; j < h; j++) {
        ans = max(ans, dp[j]);
    }

    cout << ans << "\n";

    return 0;
}
