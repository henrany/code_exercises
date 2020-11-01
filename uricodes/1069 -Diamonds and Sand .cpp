#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	cin.ignore();
	while(n--){
	    string s;
	    getline(cin,s);
	    if(s.size() < 1){
	        cout<<0<<"\n";
	    }
	    else{
	     int l=0,r=1,c=0;
	     while(r < s.size() && l < s.size()){
	         if(s[l] == '<' && s[r] == '>'){
	             c++;
	             l++;
	             r++;
	         }
	         if(l >= r) r=l+1;
	         if(s[l] != '<') l++;
	         if(s[r] != '>') r++;
	     }
	     cout<<c<<"\n";
	    }
	}
	return 0;
}
