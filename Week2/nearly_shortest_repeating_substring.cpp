#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<int> getPrimeFactors(int n) {
    vector<int> factors;
    
    while(n % 2 == 0) {
        factors.push_back(2);
        n /= 2;
    }
    
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    
    if (n> 2) {
        factors.push_back(n);
    }
    
    return factors;
}

bool compareStrings(const string& s, const string& k) {
    int diff = 0;
    int n = s.length();
    int len = k.length();
    
    for (int i = 0; i < n; ++i) {
        if (s[i] != k[i % len]) {
            diff++;
            if (diff > 1) {
                return false;
            }
        }
    }
    
    return true;
}

void solve(){
    int n;
    cin>> n;
    string s;
    cin>>s;

    for (int len = 1; len <= n; ++len) {
        if (n % len == 0) {
            string cand1 = s.substr(0, len);
            string cand2 = s.substr(n - len, len);
            
            if (compareStrings(s, cand1) || compareStrings(s, cand2)) {
                cout << len << "\n";
                return;
            }
        }
    }

}

int main(){
    int t;cin>>t;
    while(t--){
        solve();
    }
}
