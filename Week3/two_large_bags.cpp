#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    map<int,int> freq;
    for(int i=0;i<n;i++){
        freq[a[i]]++;
    }
    bool req=true;


    for(auto it = freq.begin();it != freq.end();it++){
        //writing code for the parts which fail
        int num=it->first;
        int count=it->second;
        if(count==0){
            continue;
        }
        if(count==1){
            req=false;
            break;
        }
        if(count>2){
            int left=count-2;
            freq[num+1]+=left;
        }
    }

    if(req) cout<<"Yes\n";
    else cout<<"No\n";

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
