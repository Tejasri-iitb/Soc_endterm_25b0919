#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<pair<long long, int>> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i;
    }
    
    sort(a.begin(), a.end());
    vector<long long> pref(n, 0);
    pref[0] = a[0].first;
    for (int i = 1; i < n; i++) {
        pref[i] = pref[i - 1] + a[i].first;
    }
    vector<int> sorted_ans(n, 0);
    sorted_ans[n - 1] = n - 1; 
    //below part is short but logical and easier with less confusion
    for (int i = n - 2; i >= 0; i--) {
        if (pref[i] >= a[i + 1].first) {
            sorted_ans[i] = sorted_ans[i + 1];
        } else {
            sorted_ans[i] = i;
        }
    }
    
    vector<int> final_ans(n);
    for (int i = 0; i < n; i++) {
        final_ans[a[i].second] = sorted_ans[i];
    }
    
    for (int i = 0; i < n; i++) {
        cout << final_ans[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
