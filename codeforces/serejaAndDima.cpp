#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v;
    int n,a,s=0,s1=0;
    cin>>n;
    int l=0;
    int r = n-1;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    
    for(int i=0;i<n;i++){
        if(i%2==0){
            if(v[l] > v[r]){
                s+=v[l];
                l++;
            }
            else{
                s+=v[r];
                r--;
            }
        }
        else{
            if(v[l] > v[r]){
                s1+=v[l];
                l++;
            }
            else{
                s1+=v[r];
                r--;
            }
        }
    }
    cout<<s<<" "<<s1<<"\n";
}