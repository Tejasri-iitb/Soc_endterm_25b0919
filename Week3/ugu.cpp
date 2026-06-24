#include<iostream>
#include<string>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string a;
    cin>>a;
    int count=0;
    int fi=-1;
    for(int i=0;i<n;i++){
        if(a[i]=='1'){
            fi=i;
            break;
        }
    }
    if(fi!=-1){
        char state='1';
        for(int i=fi;i<n;i++){
            if(a[i]!=state){
                count++;
                state=a[i];
            }
        }
    }
    cout<<count<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
