#include<bits/stdc++.h>
//732A

using namespace std;

int main(){
    int k,r,s=0,c=1;
    cin>>k>>r;
    for(int i=0;i<c;i++){
        s+=k;
        if(s%10 == 0){
            cout<<c<<"\n";
            exit(0);
        }
        else if(s%10 - r == 0){
            cout<<c<<"\n";
            exit(0);
        }
        c++;
    }
}