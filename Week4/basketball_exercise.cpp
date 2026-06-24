#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n; cin >> n;

    vector<long long> h1(n+2,0),h2(n+ 2 , 0);
    for (int i = 2; i < n + 2; i++) cin >> h1[i];
    for (int i = 2; i < n + 2; i++) cin >> h2[i];

    vector<vector<long long>> dp(2, vector<long long>(n + 2, 0));

    for (int i = 2; i < n + 2; i++) {
        dp[0][i]= h1[i]+ max(dp[1][i-1],dp[1][i-2]);
        dp[1][i]= h2[i]+ max(dp[0][i-1],dp[0][i-2]);
    }
    cout << max(dp[0][n+1],dp[1][n+1]) <<"\n";
}
