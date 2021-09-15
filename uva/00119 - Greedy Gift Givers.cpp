#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    int out = 1;
    while (scanf("%d", &t) != EOF){
        map<string, int> group;
        vector<string> names;
        for(int i=0;i<t+1;i++){
            if(i == 0){
                for(int j=0;j<t;j++){
                    string name;
                    cin >> name;
                    group.insert(pair<string, int>(name, 0));
                    names.push_back((name));
                }
            }
            else{
                string name;
                int money=0,num=0;
                cin>>name>>money>>num;
                int moneyGiven = 0;
                if(num != 0) moneyGiven = floor(money / num);
                group[name] -= (moneyGiven * num);
                while (num--){
                    string person;
                    cin>>person;
                    group[person] += moneyGiven;
                }
            }
        }
        if(out++ > 1) cout<<"\n";
        // gives presentation error 
        // and i dont know why
        // because udebug verify the correctness of the output
        for(auto a: names){
            cout<<a<<" "<<group[a]<<"\n";
        }  
    }
}