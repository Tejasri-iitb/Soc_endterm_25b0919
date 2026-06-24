#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int>a(n);  
    int max_even_val=0;
    int max_odd_val=0;
    int even_count=0;
    int odd_count=0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (i%2 == 0) {
            max_even_val = max(max_even_val, a[i]);
            even_count++;
        } else {
            max_odd_val = max(max_odd_val, a[i]);
            odd_count++;
        }
    }
    int score1=max_even_val + even_count;
    int score2=(n > 1) ? (max_odd_val + odd_count) : 0;
    cout << max(score1, score2) << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
