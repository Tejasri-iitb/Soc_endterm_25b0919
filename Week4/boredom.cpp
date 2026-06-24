#include<iostream>
#include <vector>
#include<algorithm>

using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<int> a(n);
    int max_element = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        max_element = max(max_element, a[i]);
    }

    vector<long long> count(max_element + 1, 0);
    for (int i = 0; i < n; i++) {
        count[a[i]]++;
    }

    vector<long long> dp(max_element + 1, 0);

    dp[0]=0;
    if (max_element >= 1) {
        dp[1] = count[1];
    }
    for (int i=2; i <= max_element; i++) {
        dp[i] = max(dp[i - 1], dp[i - 2] + i * count[i]);
    }

    cout<< dp[max_element]<<"\n";
}
