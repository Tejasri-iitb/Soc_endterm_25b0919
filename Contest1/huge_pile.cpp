#include <bits/stdc++.h>
using namespace std;
void solve(){
    long long n, k;
    cin >>n >>k;
    int time=0;
    //int 
    long long l,r;
    l=n;
    r=n;
    while(true){
        if(k==l || k==r){
            cout<<time<<"\n";
            return;
        }

        if(r<k){
            break;
        }
        l=l/2;
        r=(r+1)/2;//ceil
        time++;
    }
    cout<<-1<<"\n";
    return;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
