#include<iostream>
using namespace std;

int max1(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == 1) {
            count++;
        }
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int x=0;x<n;x++){
        cin>>arr[x];
    }
    int i,j;
    int max_ones=0;
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                arr[k]=1-arr[k];
            }
            int current_ones = max1(arr, n);
            if (current_ones>max_ones) {
                max_ones = current_ones;
            }
            for (int k = i; k <= j; k++) {
                arr[k] = 1 - arr[k];
            }
        }
    }
    cout<<max_ones;
}
