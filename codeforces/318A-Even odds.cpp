#include <iostream>
#define ll long long
using namespace std;

int main(){
    ll n, m, cal = 0;
    cin >> n >> m;
    cal = 1 + (m - 1) * 2;
    if (cal > n && !(n & 1)) cout << (cal - n) + 1 << "\n";
    else if (cal > n && (n & 1)) cout << cal - n << "\n";
    else cout << cal << "\n";
    return 0;
}
