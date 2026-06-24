#include<iostream>
#include<vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    if(!(cin>>n>>k)) return 0;

    vector<long long> pref(n + 1, 0);
    for (int i = 1; i <= n; ++i) {
        long long h;
        cin >> h;
        pref[i]= pref[i- 1] + h;
    }

    long long min_sum = 1e18;
    int ans_idx = 1;

    for (int i = k; i <= n; ++i) {
        long long current_sum = pref[i] - pref[i - k];
        if (current_sum < min_sum) {
            min_sum = current_sum;
            ans_idx = i - k + 1;
        }
    }

    cout << ans_idx << "\n";
}
