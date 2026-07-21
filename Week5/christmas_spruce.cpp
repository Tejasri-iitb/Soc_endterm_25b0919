#include<iostream>
#include<vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if(!(cin>>n)) return 0;
    vector<int> p(n+1,0),d(n+1,0),lf(n+1,0);
    for(int i=2;i<=n;i++){
        cin>>p[i];
        d[p[i]]++;
    }
    for(int i=2;i<=n;i++){
        if(d[i]==0){
            lf[p[i]]++;
        }
    }
    for(int i=1;i<=n;i++){
        if(d[i]>0&&lf[i]<3){
            cout<<"No\n";
            return 0;
        }
    }
    cout<<"Yes\n";
    return 0;
}
