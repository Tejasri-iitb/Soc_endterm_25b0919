#include<iostream>
#include<string>
using namespace std;

int main(){
    string str1,str2;
    getline(cin,str1);
    getline(cin,str2);
    if(str1.length()!=str2.length()){
        cout<<"NO";
    } 
    else{
        int i=0;
        int j=str2.length()-1;
        while(true){
            if(str1[i] != str2[j]){
                cout<<"NO";
                break;
            }
            i++;
            j--;
            if(i==str1.length()){
            cout<<"YES";
            break;
            }   
        }
        
    }
}
