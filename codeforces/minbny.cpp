#include<iostream>
// minutes before new year
//codeforces

int main(){
    int test,hrs,mins,sum;
    std::cin>>test;
    for(int i=0;i<test;i++){
        std::cin>>hrs>>mins;
        sum=((24-hrs)*60)-mins;
        std::cout<<sum;
        std::cout<<std::endl;
    }
    return 0;
}