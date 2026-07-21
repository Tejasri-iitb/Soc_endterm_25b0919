#include<iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,t;
    cin>>n>>t;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=0;
    int x=0;
    int current_sum=0;
    for(int y=0;y<n;y++){
        current_sum+=arr[y];
        while(current_sum>t){
            current_sum-=arr[x];
            x++;
        }
        if(y-x+1>max){
            max=y-x+1;
        }
    }
    cout<<max;
    return 0;
}
