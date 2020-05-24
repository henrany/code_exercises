#include<iostream>
#include<string>

using namespace std;

int main(){
    string s;
    int c=0,c1=0;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i] == '0'){
            c=1;
            for(int j=i+1;j<s.size();j++){
               if(s[j] == '0'){
                   c++;
               }
               else{
                   break;
               }
            }
        }
        else{
            c1 =1;
            for(int j=i+1;j<s.size();j++){
                if(s[j] == '1'){
                    c1++;
                }
                else{
                    break;
                }
            }
        }
        if(c >=7 || c1>=7){
            cout<<"YES"<<"\n";
            exit(0);
        }
    }
    cout<<"NO"<<"\n";
}