#include<bits/stdc++.h>

using namespace std;

int main(){
    string c="qwertyuiopasdfghjkl;zxcvbnm,./";
    char s;
    string a;
    cin>>s>>a;
    for(int i=0;i<a.size();i++){
        for(int j=0;j<c.size();j++){
            if(s == 'R'){
                if(a[i] == c[j]){
                    cout<<c[j-1];
                    break;
                }
            }
            else{
                if(a[i] == c[j]){
                    cout<<c[j+1];
                    break;
                }
            }
        }
    }    
    cout<<"\n";
}