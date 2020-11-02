#include <bits/stdc++.h>
using namespace std;

int main(){
    // your code goes here
    string s;
    while (cin >> s){
        int c = 0;
        for (int i = 0; i < s.size(); i++){
            if (c < 0){
                break;
            }
            else if (s[i] == '(') c++;
            else if (s[i] == ')') c--;
        }
        if (c == 0) cout<<"correct"<< "\n";
        else cout<< "incorrect"<<"\n";
    }
    return 0;
}
