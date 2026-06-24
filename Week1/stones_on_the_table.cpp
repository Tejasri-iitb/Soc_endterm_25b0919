#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    string str1;
    cin>>str1;
    int s=0;
    for(int i=0;i<str1.length();i++){
      if(str1[i] == str1[i+1]){
        s++;
       }
    }
    cout<<s<<endl;
}
