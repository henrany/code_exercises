#include<bits/stdc++.h>
#define ll long long 

using namespace std;

int main(){
    string s1,s2;
    while(cin>>s1){
        cin>>s2;
        int sum=0,a=0,b=0;
        vector<vector<string>> v;
        if(s1.compare(s2) > 0){
            for(int i= s2.size()-1;~i;i--){
                vector<string> v1;
                for(int j=s1.size()-1;~j;j--){
                    string s,s3(j,'0');
                    a = (ll)s2[i] - 48;
                    b = (ll)s1[j] - 48;
                    sum = a*b;
                    s = to_string(sum) + s3;
                    
                    v1.push_back(s);
                }
                v.push_back(v1);
            }
        }
        else{
            for(int i= s1.size()-1;~i;i--){
                vector<string> v1;
                for(int j=s2.size()-1;~j;j--){
                    string s,s3(j,'0');
                    a = s1[i];
                    b = s2[j];
                    sum = a*b;
                    s = to_string(sum) + s3;
                    v1.push_back(s);
                }
                v.push_back(v1);
            }
        }
    }
}