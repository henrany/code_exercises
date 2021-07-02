#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=0,k=0, a=0, counter = 0;
    cin>>n>>k;
    vector<int> numbers;
    for(int i=0;i<n;i++){
        cin>>a;
        numbers.push_back(a);
    }
    int aux = numbers[k-1];
    int size = numbers.size();
    for(int i=0;i<size;i++){
        if(numbers[i] > 0 && numbers[i] >= aux) counter++;
    }
    cout<<counter<<"\n";
}