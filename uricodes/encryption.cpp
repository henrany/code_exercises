#include<bits/stdc++.h>

using namespace std;

int main(){
    int t=0;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        for(int i=0;i<s.size();i++){
            if(s[i] >='a' && s[i] <= 'z' || s[i] >='A' && s[i] <='Z'){
                s[i] = s[i] + 3;
            }
        }
        reverse(s.begin(),s.end());
        for(int i=ceil(s.size()/2);i<s.size();i++){
            s[i] = s[i] - 1;
        }
        for(int i=0;i<s.size();i++){
            cout<<s[i];
        }
        cout<<"\n";
    }
    return 0;
}