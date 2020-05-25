#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,a,c=0,c1=0,c2=0;
    vector<int> v;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    for(int i=0;i<n;i++){
        c1=0;
        if(v[i] < 0){
            c++;
        }
        else{
            c1+=v[i];
            for(int j=i+1;j<n;j++){
                if(v[j] < 0){
                    c1--;
                    i++;
                    if(c1==0){
                        break;
                    }
                }
                else{
                    c1+=v[j];
                    i++;
                }
            }
        }
    }
    cout<<c<<"\n";
}