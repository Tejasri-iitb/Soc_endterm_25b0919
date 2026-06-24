#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    cin>>n;
    int k=n/7;
    int y=n%7;
    string sum="";
    
    if(y==0){
        for(int i=0;i<k;i++) sum+='7';
    }
    else if(y==4){
        sum+='4';
        for(int i=0;i<k;i++) sum+='7';
    }
    else if(y==1){
        if(k>=1){ sum="44"; for(int i=0;i<k-1;i++) sum+='7'; }
        else sum="-1";
    }
    else if(y==5){
        if(k>=1){ sum="444"; for(int i=0;i<k-1;i++) sum+='7'; }
        else sum="-1";
    }
    else if(y==2){
        if(k>=2){ sum="4444"; for(int i=0;i<k-2;i++) sum+='7'; }
        else sum="-1";
    }
    else if(y==6){
        if(k>=2){ sum="44444"; for(int i=0;i<k-2;i++) sum+='7'; }
        else sum="-1";
    }
    else{
        if(k>=3){ sum="444444"; for(int i=0;i<k-3;i++) sum+='7'; }
        else sum="-1";
    }
    cout<<sum;
}
