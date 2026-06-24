#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int totalDays;
    cin>>totalDays;

    vector<int> earnings(totalDays);
    for(int i=0;i<totalDays; i++) {
        cin>>earnings[i];
    }

    int maxLen=1;
    int currLen=1;

    for (int i=1;i<totalDays;i++) {
        if(earnings[i] >= earnings[i - 1]) {
            currLen++;
        }else{
            currLen=1;
        }
        maxLen=max(maxLen,currLen);
    }

    cout << maxLen <<"\n";
    return 0;
}
