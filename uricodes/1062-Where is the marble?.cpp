#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    int n,m,i=1;
    while(cin>>n>>m && n!=0){
        cout<<"CASE# "<<i<<":\n";
        int a=0;
        for(int i=0;i<n;i++){
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<m;i++){
            cin>>a;
            bool found = false;
            int index = 0;
            for(int i=0;i<v.size();i++){
                if(v[i] == a){
                    found = true;
                    index = i;
                    break;
                }
            }
            if(found) cout<<a<<" found at "<<index+1<<"\n";
            else cout<<a<<" not found\n";
        }
        v.clear();
        i++;
    }
    return 0;
}