#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    ll arr[2][51];
	    ll n,c=0,ma=1e9,mb=1e9;
	    cin>>n;
	    for(int i=0;i<2;i++){
	        for(int j=0;j<n;j++){
	            cin>>arr[i][j];
	        }
	    }
	    for(int i=0;i<n;i++){
	        if(arr[0][i] < ma) ma = arr[0][i];
	        if(arr[1][i] < mb) mb = arr[1][i];
	    }
	    for(int j=0;j<n;j++){
	        if(arr[0][j] > ma && arr[1][j] > mb){
	            c+=max(arr[0][j] - ma, arr[1][j] - mb);
	        }
	        else if(arr[0][j] > ma && arr[1][j] == mb){
	            c+=arr[0][j] - ma;
	        }
	        else{
	            c+=arr[1][j] - mb;
	        }
	    }
	    for(int i=0;i<2;i++){
	        for(int j=0;j<n;j++){
	           arr[i][j] = 0;
	        }
	    }
	   cout<<c<<"\n";
	}
	return 0;
}
