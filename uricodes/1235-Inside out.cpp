#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();
    while (n--){
        string s, s1 = "", s2 = "";
        getline(cin, s);
        int c = 0;
        c = (s.size()) / 2;
        for (int i = c-1; ~i; i--){
            s1 += s[i];
        }
        for (int j =s.size()-1; j>=c; j--){
            s2 += s[j];
        }
        cout << s1 << s2 << "\n";
    }
    return 0;
}