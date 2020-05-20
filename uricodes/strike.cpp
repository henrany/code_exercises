#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<pair<string, int>> my;
    int n,c,sum1=0,sum2=0;
    string t;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>t>>c;
        my.push_back(make_pair(t,c));
    }

    for(auto &p:my){
        if(p.first == "G"){
            sum1+=p.second;
        }
        else{
            sum2+=p.second;
        }
    }
    cout<<(sum1<=sum2?"A greve vai parar.":"NAO VAI TER CORTE, VAI TER LUTA!")<<"\n";
}