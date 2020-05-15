#include<iostream>
#include<string>

using namespace std;

int main(){
    string n;
    getline(cin,n);
    for(int i=0;i<n.size();i++){
        if(n[i] == '.'){
            cout<<0;
        }
        else if(n[i] == '-' && n[i+1] == '.'){
            cout<<1;
            i=i+1;
        }
        else if(n[i] =='-' && n[i+1]=='-'){
            cout<<2;
            i++;
        }
    }
    cout<<"\n";
}