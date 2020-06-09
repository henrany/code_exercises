#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    while(getline(cin,s)){
        vector<char>v;
        int c=0;
        transform(s.begin(),s.end(),s.begin(), ::tolower);
        for(int i=0;i<s.size();i++){
            if(s[i] >= 'a' && s[i] <= 'z'){
                v.push_back(s[i]);
            }
        }
        
        for(int i=0;i<v.size();i++){
            v[i] = toupper(v[i]);
            v[i+1] = tolower(v[i+1]);
            i++;
        }

        for(int i=0;i<s.size();i++){
            if(s[i] >= 'a' && s[i] <='z' || s[i] >='A' && s[i] <='Z'){
                cout<<v[c];
                c++;
            }
            else{
                cout<<s[i];
            }
        }
        cout<<"\n";
        v.clear();
    }
}