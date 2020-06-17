#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll arr[3651];
        memset(arr,0,sizeof(arr));
        ll n,a,s=0;
        cin>>n>>a;
        while(a--){
            ll c, b=0;
            cin>>c;
           for(int i=c;i<=n;i+=c){
               int m=0;
               m = i%7;
               if(m != 6 && m != 0){
                   arr[i] = i; 
               }
           }
        }
        for(int i=1;i<=n;i++){
            if(arr[i] != 0){
                s++;
            }
        }
        cout<<s<<"\n";
    }
}