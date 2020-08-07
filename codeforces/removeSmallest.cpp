#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    vector<int> v;
	    int a,n,c=1;
	    cin>>n;
	    while(n--){
	        cin>>a;
	        v.push_back(a);
	    }
	    sort(v.begin(),v.end());
	    for(int i=0;i<v.size();i++){
	        if(i!= v.size()-1){
	            if(abs(v[i] - v[i+1]) <= 1) c++;
	        }
	    }
	    cout<<(c==v.size()?"YES":"NO")<<"\n";
	}
	return 0;
}
