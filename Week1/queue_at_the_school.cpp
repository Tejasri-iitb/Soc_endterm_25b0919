#include<iostream>
#include<string>
using namespace std;

void arrange(string &arr,int size){
    for(int i=0;i<size-1;i++){//size-1 should be considered
        if(arr[i]=='B' && arr[i+1]=='G'){
            arr[i]='G';
            arr[i+1]='B';
            i++;
        }
    }
}

int main(){
    int n,t;
    cin>>n>>t;
    string str1;
    cin>>str1;
    for(int i=0;i<t;i++){
        arrange(str1,n);
    }
    for(int i=0;i<n;i++){
        cout<<str1[i];
    }

}
