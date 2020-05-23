#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c=1;
    cin>>a>>b;
    for(int i=0;i<c;i++){
        if(a>b){
            break;
        }
        else{
            a*=3;
            b*=2;
        }
        c++;
    }
    cout<<c-1<<"\n";
    return 0;
}