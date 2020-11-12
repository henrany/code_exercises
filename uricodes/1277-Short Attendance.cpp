#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();
    while(n--){
        int a;
        cin>>a;
        vector<pair<string, pair<string, double>>> v;
        string s, s1;
        char e;
        cin.get(e);
        getline(cin,s,'\n');
        getline(cin,s1,'\n');
        string s2="";
        for(int i=0;i<a;i++){
            v.push_back(make_pair("",make_pair("",0.0)));
        }
        int c = 0;
        for(int i=0;i<s.size();i++){
            if (i == s.size() - 1){
                s2+=s[i];
                v[c].first = s2;
            }
            if(s[i] == ' '){
                v[c].first = s2;
                c++;
                s2="";
            }
            else{
                s2+=s[i];
            }
        }
        s2="";
        c = 0;
        for(int i=0;i<s1.size();i++){
            if(i == s1.size() - 1){
                s2+=s1[i];
                v[c].second.first = s2;
            }
            if(s1[i] == ' '){
                v[c].second.first = s2;
                c++;
                s2="";
            }
            else{
                s2+=s1[i];
            }
        }
        c = 0;
        for(int i=0;i<v.size();i++){
            int p=0,a=0;
            for(int j=0;j<v[i].second.first.size();j++){
                if(v[i].second.first[j] == 'P'){
                    p++;
                }
                else if(v[i].second.first[j] == 'A'){
                    a++;
                }
            }
            v[i].second.second = ((double)p/ (double)(p+a))*100.00;
            if(v[i].second.second < 75.0){
                if(c == 0){
                    cout << v[i].first;
                    c++;
                }
                else cout<<" "<<v[i].first;
            }
        }
        cout<<"\n";
        v.clear();
    }
}