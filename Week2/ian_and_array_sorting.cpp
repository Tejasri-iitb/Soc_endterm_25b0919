#include<iostream>
using namespace std;
int main(){
    int t;cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        long long a[n];
        for(int j=0;j<n;j++){
            cin>>a[j];
        }
        if(n%2!=0){
            cout<<"YES\n";
        }else{
            for (int i = 1; i < n - 1; i += 2) {
                long long diff = a[i-1] - a[i];
                
                a[i] += diff;
                a[i+1] += diff;
            }

            if (a[n-1] >= a[n-2]) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
}
