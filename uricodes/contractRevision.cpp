#include<bits/stdc++.h>

using namespace std;

int main(){ 
    string s,s1;
    while(cin>>s>>s1 && s!="0" && s1!="0"){
        string c="";
        for(int i=0;i<s1.size();i++){
            for(int j=0;j<s.size();j++){
               if(s1[i] != s[j]){
                  c+=s1[i];
               }
            }
        }
        if(c.size() == 0){
            cout<<'0'<<"\n";
        }
        else if(c[0] == '0'){
            int n=0,pos=0;
            for(int i=0;i<c.size();i++){
                if(c[i] != '0'){
                    pos = i;
                    n++;
                    break;
                }
            }
            if(n == 0){
                cout<<'0'<<"\n";
            }
            else{
                for(int i=pos;i<c.size();i++){
                    cout<<c[i];
                }
                cout<<"\n";
            }
        }
        else{
            for(int i=0;i<c.size();i++){
                cout<<c[i];
            }
            cout<<"\n";
        }
    }
}