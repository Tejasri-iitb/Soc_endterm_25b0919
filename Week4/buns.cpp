#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, c0, d0;
    if (!(cin >> n >> m >> c0 >> d0)) return 0;

    vector<int> dp(n + 1, 0);

    for (int j = c0; j <= n; j++) {
        dp[j] = dp[j - c0] + d0;
    }

    for (int i = 0; i < m; i++) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int max_buns = a / b;

        for (int j = n; j >= 0; j--) {
            for (int k = 1; k <= max_buns; k++) {
                if (j >= k * c) {
                    dp[j] = max(dp[j], dp[j - k * c] + k * d);
                } else {
                    break;
                }
            }
        }
    }

    int max_profit = 0;
    for (int j = 0; j <= n; j++) {
        max_profit = max(max_profit, dp[j]);
    }

    cout << max_profit << "\n";
}
