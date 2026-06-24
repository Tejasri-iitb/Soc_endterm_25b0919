#include<iostream>
using namespace std;

int sum(int arr[],int a,int b){
    int value=0;
    for(int i=a;i<=b;i++){
        value+=arr[i];
    }
    return value;
}

int main(){
    int n,t;
    cin>>n>>t;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x=0;
    int y;
    int max=0;
    for(x=0;x<n;x++){
        for(y=x;y<n;y++){
            if(sum(arr,x,y)<=t){
                if(y-x+1>max){
                    max=y-x+1;
                }
            }else{
                break;
            }
        }
    }
    cout<<max;
}
