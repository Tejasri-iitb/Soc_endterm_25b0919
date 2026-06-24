#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int p[n];
        for(int i=0;i<n;i++){
            cin>>p[i];
        }
        int count=0;
        for(int i=0;i<n-1;i++){
            if(p[i]>p[i+1]){
                count++;
                i++;
            }
        }
        cout<<count<<"\n";
    }
}
