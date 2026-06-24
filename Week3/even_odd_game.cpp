#include<iostream>
#include<algorithm>

using namespace std;

void solve(){
    int n;cin>>n;
    long long a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    long long al_score=0;
    long long bob_score=0;
    for(int i=n-1;i>=0;i--){
        if ((i % 2)==((n-1)%2) ){
            if(a[i]%2==0) al_score+=a[i];
        }
        else{
            if(a[i]%2 !=0) bob_score+=a[i];
        }
    }
    if(al_score > bob_score){
        cout<<"Alice"<<"\n";
    }
    else if(al_score < bob_score){
        cout << "Bob"<<"\n";
    }
    else {cout<<"Tie"<<"\n";
}
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    while(t--){
        solve();
    }
}
